
//distance_parameterized
#include<iostream>
using namespace std;

class Distance
{

float feet;
float inch;


public:
    void display()
    {


    cout<<"the inch is:"<<inch<<endl;
    cout<<"the feet is:"<<feet<<endl;

    }




    Distance (float feet1 ,float inch1)
    {


         feet=feet1;
         inch=inch1;
    }



};

int main()
{
    Distance d1(5.2,14.4);
    d1.display();
    return 0;


}
