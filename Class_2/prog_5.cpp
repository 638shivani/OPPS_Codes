//External member function means:

//We declare the member function inside the class and define/implement it outside the class using the scope resolution operator ::



#include<iostream>
using namespace std;

class student
{
public:
     string name;
     int age;
public:

    void display();
};
void student :: display()

    {
        cout<<"the name:"<<name <<endl;
        cout<<"the age:"<<age<<endl;
    }

int main()
{
    student s1;
    s1.name="shivani";
    s1.age=21;
    s1.display();
    return 0;
}
