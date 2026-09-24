//A friend function is a non-member function that is declared with the friend keyword inside a class and can access the private and protected members of that class.
#include<iostream>
using namespace std;

class addation
{
    int num1;
    int num2;

    public:

    void display();
    friend int sum(addation A)
    {
         return A.num1+A.num2;


    }

    void setData(int n1,int n2)
{
    num1=n1;
    num2=n2;
}

};

void addation :: display()
{
    cout<<"the num1:"<<num1<<endl;
    cout<<"the num2:"<<num2<<endl;


}

int main()
{
    addation a1;
    a1.setData(4,5);
    a1.display();
    cout<<"the sum :"<<sum(a1)<<endl;


}
#in above we can write friend function inside class and outside calss also
