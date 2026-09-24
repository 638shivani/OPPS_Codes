//create the class and oblective accesing the private data through member function using by pass

#include<iostream>
using namespace std;

class student
{
private:
    int marks;
    float sgpa;
public:

    void setData(int a ,float s)
    {



     marks=a;
     sgpa=s;
    }
    getData()
    {

        cout<<"the marks"<<marks <<endl;
        cout<<"the sgpa"<<sgpa<<endl;
    }
};

int main()
{
    student s1;
    s1.setData(400,8.9);
    s1.getData();
    return 0;
}
