#single interitance
#include<iostream>
using namespace std;

class animal
{
public:
    int leg;

    void display()
    {
        cout<<"the number legs is:"<<leg<<endl;
    }

};

class Dog : public animal
{ public:
    string colour;

    void display()
    {
        cout<<"the colour of dog is"<<colour<<endl;
    }
};

int main()
{   animal a;
    Dog d1;
    d1.colour="pink";
    d1.leg=4;
    d1.display();
    a.display();
}
