#include "String.h"
#include <iostream>
#include <cstring>
using namespace std;

#define green   "\033[32m"
#define red     "\033[31m"
#define default "\033[m"

String::String()
{
    tam = 0;
    str = nullptr;
    cout << green << "String vazia criada\n" << default;
}

String::~String()
{
    cout << red << "String \"" << str << "\" destruída\n" << default;
    delete[] str;
}

String::String(const char s[])
{
    tam = strlen(s);
    str = new char[tam + 1];
    memcpy(str, s, tam+1);
    cout << green << "String \"" << str << "\" criada\n" << default;
}

String::String(const String& s)
{
    tam = s.tam;
    str = new char[tam + 1];
    memcpy(str, s.str, tam+1);
    cout << green << "String \"" << str << "\" copiada\n" << default;
}

String& String::operator=(const char s[])
{
    delete[] str;
    tam = strlen(s);
    str = new char[tam + 1];
    memcpy(str, s, tam + 1);
    cout << "String \"" << str << "\" atribuída\n";
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
    cout << "String \"" << str << "\" atribuída\n";
    return *this;
}

String operator+(const String& s1, const String& s2)
{
    String s;
    s.tam = s1.tam + s2.tam;
    s.str = new char[s.tam + 1];
    memcpy(s.str, s1.str, s1.tam);
    memcpy(s.str + s1.tam, s2.str, s2.tam+1);
    cout << "Strings \"" << s1.str << "\" e ";
    cout << "\"" << s2.str << "\" concatenadas\n";
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
