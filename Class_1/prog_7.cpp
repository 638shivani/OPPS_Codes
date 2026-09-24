//check the given string is palindrome or not
#include<iostream>
using namespace std;

int main()
{

    string s;


    string rev = "";

    cout<<"enter the string";
    cin>>s;
    string word = s;

    for (int i = 0; i<s.length() ; i ++)
    {

      rev = s[i] + rev;
    }

    if (rev == word)
    {
        cout<<" the given string is palindrome";
    }
    else
    {

        cout<<"the given string is not palindrome";
    }

    return 0;


}
