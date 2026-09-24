//create the class and oblective accesing the private data through member function using user in take

#include<iostream>
using namespace std;

class student
{
private:
    int marks;
    float sgpa;
public:

    void setData()
    {
      cout<<"enter the marks"<<endl;
      cin>>marks;
      cout<<"enter the sgpa"<<endl;
      cin>>sgpa;


     //marks=a;
     //sgpa=s;
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
    s1.setData();
    s1.getData();
    return 0;
}
