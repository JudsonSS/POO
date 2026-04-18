#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <cstring>

int String::objs = 0;

String::String(const char s[])
{
    tam = strlen(s);
    str = new char[tam + 1];
    strcpy(str, s);
    objs++;
}

String::String(const String& s)
{
    tam = s.tam;
    str = new char[tam + 1];
    strcpy(str, s.str);
    objs++;
}

String::String()
{
    tam = 0;
    str = new char[1] { "" };
    objs++;
}

String::~String()
{
    delete[] str;
    objs--;
}

String& String::operator=(const String& s)
{
    if (this == &s)
        return *this;
    
    delete[] str;
    tam = s.tam;
    str = new char[tam + 1];
    strcpy(str, s.str);

    return *this;
}

ostream& operator<<(ostream& os, const String& s) 
{
    os << s.str;
    return os;
}