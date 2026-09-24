
// Write a C++ program to find the sum of two private data members numA and numB of two classes ABC and XYZ using a common friend function.
// Assume that the protoype for both the classes will be int add(ABC,XYZ); ...
using namespace std;
class xyz;//forward decl
class abc
{
    int num1;


    public:

    void display();
    friend int sum(abc ,xyz);


    void setData(int n1)
{
    num1=n1;

}

};

void abc :: display()
{
    cout<<"the num1:"<<num1<<endl;



}

class xyz
{

    int num2;

    public:

    void display();
    friend int sum(abc,xyz);


    void setData(int n2)
{

    num2=n2;
}

};

void xyz :: display()
{

    cout<<"the num2:"<<num2<<endl;


}

int sum(abc A , xyz X)
{
    return A.num1+X.num2;
}


int main()
{
    abc a1;
    a1.setData(4);
    a1.display();
    xyz x1;
    x1.setData(5);
    x1.display();
    cout<<"the sum :"<<sum(a1,x1)<<endl;


}
