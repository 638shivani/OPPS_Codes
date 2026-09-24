//create the class and oblective accesing the public data through member function

#include<iostream>
using namespace std;

class student
{
public:
     string name;
     int age;
public:

    void display()
    {

        cout<<"the name:"<<name <<endl;
        cout<<"the age:"<<age<<endl;
    }
};

int main()
{
    student s1;
    s1.name="shivani";
    s1.age=21;
    s1.display();
    return 0;
}
