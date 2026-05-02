#include "String.h"
#include <cstring>
#include <iostream>
using std::cout;

size_t String::MinCap = 4;

void String::Expand()
{
    cap = (cap > 0 ? cap * 2 : String::MinCap);
    char * temp = new char[cap] {0};
    memcpy(temp, str, tam);
    delete[] str;
    str = temp;
}

String::String(const char s[])
{
    tam = strlen(s);
    cap = tam < String::MinCap ? String::MinCap : tam;
    str = new char[cap]{0};
    memcpy(str, s, tam);
}

String::String(const String& s)
{
    tam = s.tam;
    cap = s.cap;
    str = new char[cap]{0};
    memcpy(str, s.str, tam);
}

String::String()
{
    str = new char[String::MinCap]{0};
    tam = 0;
    cap = String::MinCap;
}

String::~String()
{
    delete[] str;
}

String& String::operator=(const char s[])
{
    delete[] str;
    tam = strlen(s);
	cap = tam > String::MinCap ? tam : String::MinCap;
    str = new char[cap]{0};
    memcpy(str, s, tam);
    return *this;
}

String& String::operator=(const String& s)
{
    if (this == &s)
        return *this;
    
    delete[] str;
    tam = s.tam;
	cap = s.cap;
    str = new char[cap]{0};
    memcpy(str, s.str, tam);
    return *this;
}

char& String::operator[](int i)
{
    return str[i];
}

const char& String::operator[](int i) const
{
    return str[i];
}

String String::operator+(const String& s) const
{
    size_t tempTam = tam + s.tam;
    size_t tempCap = tempTam > String::MinCap ? tempTam : String::MinCap;
    char* temp = new char[tempCap]{0};
    memcpy(temp, str, tam);
    memcpy(temp+tam, s.str, s.tam);
    
    String tempStr;
    tempStr.str = temp;
    tempStr.tam = tempTam;
    tempStr.cap = tempCap;

    return tempStr;
}

size_t String::Size() const
{
    return tam;
}

void String::SetMinCapacity(size_t minCap)
{
	MinCap = minCap < 1 ? 1 : minCap;
}

ostream& operator<<(ostream& os, const String& s)
{
    if (s.str)
    {
        for (int i = 0; i < s.tam; i++)
            os << s.str[i];
    }
    return os;
}

istream& operator>>(istream& is, String& s)
{
    char ch;
    s.tam = 0;
    while (is.get(ch) && ch != '\n')
    {
        if (s.tam >= s.cap) 
			s.Expand();

        s.str[s.tam++] = ch;
    } 
	return is;
}
