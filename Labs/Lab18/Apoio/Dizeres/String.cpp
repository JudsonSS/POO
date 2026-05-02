#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <cstring>

int String::Objs = 0;
int String::CinLim = 100;

String::String()
{
    tam = 0;
    str = nullptr;
    str = new char[1] { '\0' };
    Objs++;
}

String::~String()
{
    delete[] str;
    Objs--;
}

String::String(const char s[])
{
    tam = strlen(s);
    str = new char[tam + 1];
    strcpy(str, s);
    Objs++;
}

String::String(const String& s)
{
    tam = s.tam;
    str = new char[tam + 1];
    strcpy(str, s.str);
    Objs++;
}

String& String::operator=(const char s[])
{
    delete[] str;
    tam = strlen(s);
    str = new char[tam + 1];
    strcpy(str, s);

    return *this;
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

char& String::operator[](int i)
{
    return str[i];
}

const char& String::operator[](int i) const
{
    return str[i];
}

size_t String::Size() const
{
    return tam;
}

int String::Count()
{
    return Objs;
}

void String::SetLim(int lim)
{
    CinLim = lim > 0 ? lim : 1;
}

ostream& operator<<(ostream& os, const String& s) 
{
    os << s.str;
    return os;
}

istream& operator>>(istream& is, String& s)
{
    char * temp = new char[String::CinLim];
    is.getline(temp, String::CinLim);
    s = temp;
    delete[] temp;
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
