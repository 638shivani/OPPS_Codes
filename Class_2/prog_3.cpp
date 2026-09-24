//create the class and oblective accesing the private data through member function

#include<iostream>
using namespace std;

class student
{
private:
     string name;
     int age;
public:

    void setData(string n ,int a)
    {



     name=n;
      age=a;
    }
    getData()
    {

        cout<<"the name"<<name <<endl;
        cout<<"the age"<<age<<endl;
    }
};

int main()
{
    student s1;
    s1.setData("shivani",21);
    s1.getData();
    return 0;
}
