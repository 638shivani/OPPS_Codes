//default constructor
#include<iostream>
using namespace std;

class employee
{

int id;
string dprt;

public:
    void display()
    {


    cout<<"the id of employee:"<<id<<endl;
    cout<<"the dprt of employee:"<<dprt<<endl;
    }

    employee()
    {
    cout<<"enter the id of employee"<<endl;
    cin>>id;
    cout<<"enter the dprt of employee"<<endl;
    cin>>dprt;
    }


};

int main()
{
    employee e1,e2 ;
    e1.display();
    e2.display();

}
