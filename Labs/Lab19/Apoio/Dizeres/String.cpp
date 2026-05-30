#include "String.h"
#include <cstring>

String::String()
{
    tam = 0;
    str = nullptr;
}

String::~String()
{
    delete[] str;
}

String::String(const char s[])
{
    tam = strlen(s);
    str = new char[tam + 1];
    memcpy(str, s, tam+1);
}

String::String(const String& s)
{
    tam = s.tam;
    str = new char[tam + 1];
    memcpy(str, s.str, tam+1);
}

String& String::operator=(const char s[])
{
    delete[] str;
    tam = strlen(s);
    str = new char[tam + 1];
    memcpy(str, s, tam + 1);
    return *this;
}

String& String::operator=(const String& s)
{
    if (this == &s)
        return *this;
    
    delete[] str;
    tam = s.tam;
    str = new char[tam + 1];
    memcpy(str, s.str, tam+1);
    return *this;
}

String operator+(const String& s1, const String& s2)
{
    String s;
    s.tam = s1.tam + s2.tam;
    s.str = new char[s.tam + 1];
    memcpy(s.str, s1.str, s1.tam);
    memcpy(s.str + s1.tam, s2.str, s2.tam+1);
    return s;
}

char& String::operator[](int i)
{
    return str[i];
}

const char& String::operator[](int i) const
{
    return str[i];
}

ostream& operator<<(ostream& os, const String& s) 
{
    if (s.str) os << s.str;
    return os;
}

istream& operator>>(istream& is, String& s)
{
    char temp[100];
    is.getline(temp, 100);
    s = temp;
    return is;
}

bool operator<(const String& s1, const String& s2)
{
    return (strcmp(s1.str, s2.str) < 0);
}

bool operator>(const String& s1, const String& s2)
{
    return s2 < s1;
}

bool operator==(const String& s1, const String& s2)
{
    return (strcmp(s1.str, s2.str) == 0);
}
