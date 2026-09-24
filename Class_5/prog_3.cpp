//multi-level using access modifier
#include<iostream>
using namespace std;

class grandfather
{
private:
     string talent;
public:

     void settalent(string S)
     {

         talent=S;
     }

     void gettalent()
     {
         cout<<"the talent of grandfather is :"<< talent<<endl;
     }

public:
    void colour()
    {
        cout<<"the colour is is black"<<endl;
    }
};

class father : public grandfather
{
private:
    int height;
    int salary;

public:
    void setINF(int H ,int S)
    {
        height=H;
        salary=S;
    }

    void getINF()
    {
        cout<<"the height is :"<<height<<endl;
        cout<<"the salary is :"<<salary<<endl;
    }

};


class son : public father
{

public :
    int age;
};


int main()
{
    son s1;
    s1.settalent("fast calulation");
    s1.setINF(5.3,30000);
    s1.getINF();
    s1.gettalent();
    s1.colour();

    return 0;
}
