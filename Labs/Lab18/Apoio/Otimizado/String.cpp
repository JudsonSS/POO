#include "String.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

// capacidade SmallString (sem contar \0)
constexpr static size_t SmallCapacity = sizeof(SmallString) - 1;

void DebugInfo(const char * message, const char * detail = nullptr)
{
    // exibe mensagem na cor cinza
    cout << "\033[38:5:238m";
    cout << "> " << message;
    if (detail)
        cout << ": " << detail;
    cout << endl;
    cout << "\033[0m";
}

String::String()
{
    isSmall = true;
    data.small.str[0] = '\0';
    DebugInfo("Small String criada vazia");
}

String::~String()
{
    if (isSmall)
    {
        DebugInfo("Small String destruída", data.small.str);
    }
    else
    {
        DebugInfo("Heap String destruída", data.heap.str);
        delete[] data.heap.str;
    }
}

String::String(const char s[])
{
    size_t sLength = strlen(s);

    if (sLength <= SmallCapacity)
    {
        isSmall = true;
        memcpy(data.small.str, s, sLength + 1);
        DebugInfo("Small String criada", data.small.str);
    }
    else
    {
        isSmall = false;
        data.heap.str = new char[sLength + 1];
        data.heap.size = sLength;
        memcpy(data.heap.str, s, sLength + 1);
        DebugInfo("Heap String criada", data.heap.str);
    }
}

String::String(const String& s)
{
    if (s.isSmall)
    {
        isSmall = true;
        memcpy(data.small.str, s.data.small.str, SmallCapacity + 1);
        DebugInfo("Small String copiada", data.small.str);
    }
    else
    {
        isSmall = false;
        data.heap.str = new char[s.data.heap.size + 1];
        data.heap.size = s.data.heap.size;
        memcpy(data.heap.str, s.data.heap.str, s.data.heap.size + 1);
        DebugInfo("Heap String copiada", data.heap.str);
    }
}

String& String::operator=(const char s[])
{
    if (!isSmall)
        delete[] data.heap.str;

    size_t len = strlen(s);

    if (len <= SmallCapacity)
    {
        isSmall = true;
        memcpy(data.small.str, s, len + 1);
        DebugInfo("Small String atribuída", data.small.str);
        return *this;
    }
    else
    {
        isSmall = false;
        data.heap.str = new char[len + 1];
        data.heap.size = len;
        memcpy(data.heap.str, s, len + 1);
        DebugInfo("Heap String atribuída", data.heap.str);
        return *this;
    }
}

String& String::operator=(const String& s)
{
    if (this == &s)
        return *this;

    if (!isSmall)
        delete[] data.heap.str;
    
    if (s.isSmall)
    {
        isSmall = true;
        memcpy(data.small.str, s.data.small.str, SmallCapacity + 1);
        DebugInfo("Small String atribuída", data.small.str);
        return *this;
    }
    else
    {
        isSmall = false;
        data.heap.str = new char[s.data.heap.size + 1];
        data.heap.size = s.data.heap.size;
        memcpy(data.heap.str, s.data.heap.str, s.data.heap.size + 1);
        DebugInfo("Heap String atribuída", data.heap.str);
        return *this;
    }
}

char& String::operator[](int i)
{
    return isSmall ? data.small.str[i] : data.heap.str[i];
}

const char& String::operator[](int i) const
{
    return isSmall ? data.small.str[i] : data.heap.str[i];
}

String String::operator+(const String& s) const
{
    size_t s1Size = Size();
    size_t s2Size = s.Size();
    size_t totalSize = s1Size + s2Size;

    if (totalSize <= SmallCapacity)
    {
        String result;
        result.isSmall = true;
        memcpy(result.data.small.str, Data(), s1Size);
        memcpy(result.data.small.str + s1Size, s.Data(), s2Size + 1);
        DebugInfo("Small String concatenada", result.data.small.str);
        return result;
    }
    else
    {
        String result;
        result.isSmall = false;
        result.data.heap.str = new char[totalSize + 1];
        result.data.heap.size = totalSize;
        memcpy(result.data.heap.str, Data(), s1Size);
        memcpy(result.data.heap.str + s1Size, s.Data(), s2Size + 1);
        DebugInfo("Heap String concatenada", result.data.heap.str);
        return result;
    }
}

size_t String::Size() const
{
    return isSmall ? strlen(data.small.str) : data.heap.size;
}

const char* String::Data() const
{
    return isSmall ? data.small.str : data.heap.str;
}

ostream& operator<<(ostream& os, const String& s)
{
    os << s.Data();
    return os;
}

istream& operator>>(istream& is, String& s)
{
    if (!s.isSmall)
        delete[] s.data.heap.str;

    char ch;
    is.get(ch);
    long long charsInBuffer = is.rdbuf()->in_avail();

    if (ch == '\n')
    {
        s.isSmall = true;
        s.data.small.str[0] = '\0';
        DebugInfo("Small String vazia lida");
        return is;
    }

    int size = 0;
    if (charsInBuffer <= SmallCapacity)
    {
        s.isSmall = true;
        do s.data.small.str[size++] = ch;
        while (is.get(ch) && ch != '\n');
        s.data.small.str[size] = '\0';
        DebugInfo("Small String lida", s.data.small.str);
        return is;
    }
    else
    {
        s.isSmall = false;
        s.data.heap.size = charsInBuffer;
        s.data.heap.str = new char[charsInBuffer + 1];
        do s.data.heap.str[size++] = ch;
        while (is.get(ch) && ch != '\n');		
        s.data.heap.str[size] = '\0';
        DebugInfo("Heap String lida", s.data.heap.str);
        return is;
    }
}
