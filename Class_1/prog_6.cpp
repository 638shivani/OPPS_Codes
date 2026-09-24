// write a cpp program to find the length of the string 1.using C-style 2.using C++-style
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    // C-string
    char cstr[20] = "Hello";

    // C++ string
    string str = "Hello";

    cout << "C-string: " << cstr << endl;
    cout << "C++ string: " << str << endl;

    // Length of C-string
    cout << "Length of C-string: " << strlen(cstr) << endl;

    // Length of C++ string
    cout << "Length of C++ string: " << str.length() << endl;

    return 0;
}
