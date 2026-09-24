//pass by value and pointer and refernce
#include<iostream>
using namespace std;

void passbyvalue(int x,int y)
{

    int z =x;
    x=y;
    y=z;
}
void passbyreference(int &x,int &y)
{

    int z =x;
    x=y;
    y=z;
}

void passbypointer(int *x,int *y)
{

    int z =*x;
    *x=*y;
    *y=z;
}


int main()
{
   int a = 5;
   int b = 6;


cout<<"before swapping"<<"\n"<<"a:"<< a<<"\n" <<"b:"<< b <<"\n";
passbyvalue(a,b);

cout<<"affer swapping"<<"\n"<<"a:"<<a<<"\n"<<"b:"<<b;

return 0;
}
