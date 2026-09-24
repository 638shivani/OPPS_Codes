//static member
#include<iostream>
using namespace std;

class employee
{
int id;
static int ID;
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



    employee(string DPRT ,float salary ,string NAME)
    {


         id=ID++;
         dprt=DPRT;
         sal=salary;
         name=NAME;
    }
  employee ()
 {
     ID++;
 }


};

int employee :: ID = 1;

int main()
{
    employee e1("ec" ,30000 , "Shivani");
    employee e2("ec",40000,"sneha");
    employee e3("ec",450000,"sahana");
    employee e4("ec",50000,"savitha");
    employee e5("ec",60000,"savi");

    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();

}
