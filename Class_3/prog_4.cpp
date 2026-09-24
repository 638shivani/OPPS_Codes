
//both default and paramet
#include<iostream>
using namespace std;

class employee
{

int id;
string dprt,name;
float sal;


public:
    void display()
    {


    cout<<"the id of employee:"<<id<<endl;
    cout<<"the dprt of employee:"<<dprt<<endl;
    cout<<"the salary of employee"<<sal<<endl;
     cout<<"the name of employee"<<name<<endl;
    }

    employee()
    {
    cout<<"enter the id of employee"<<endl;
    cin>>id;
    cout<<"enter the dprt of employee"<<endl; //def
    cin>>dprt;
    cout<<"enter the salary of employee"<<endl;
    cin>>sal;
     cout<<"enter the name of employee"<<endl;
    cin>>name;

    }
    employee(int ID ,string DPRT ,float salary ,string NAME)
    {


         id=ID;
         dprt=DPRT;
         sal=salary;
         name=NAME;
    }



};

int main()
{
    employee e1(2,"ec" , 30000 , "Shivani"),e2 ;//part
    e1.display();
    e2.display();

}
