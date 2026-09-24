//multi-level

#include<iostream>
using namespace std;

class grandfather
{
public:
    void colour()
    {
        cout<<"the colour is is black"<<endl;
    }
};

class father : public grandfather
{
public:
    int height;

};


class son : public father
{

public :
    int age;
};


int main()
{
    son s1;
    s1.age=12;
    s1.height=4;
    cout<<" the age of son "<< s1.age << "\n" <<"the height:"<< s1.height <<endl;
    s1.colour();
}
