// Copyright 2020 Longa Bonga
#include<iostream>
#include "MyString.h"

int main()
{
    std::cout << "######################## \n";
    MyString s1("Hello,");
    std::cout << s1;
    MyString s2("world!");
    MyString s3;
    s3 = s2 + s1;
    std::cout << s3;

    // std::cout << s3;
    // std::cout << s3("ll");   // 2
    // std::cout << s3("mama"); // -1
}
