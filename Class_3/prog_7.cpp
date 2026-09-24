deconstructor
#include<iostream>
using namespace std;

class rectangle
{
private:

    float l;
    float w;

    //default constructor
 public:
    rectangle()
    {
        cout<<"the length of rectangle"<<endl;
        cin>>l;
        cout<<"the width of rectangle"<<endl;
        cin>>w;
    }
    // parametized constructor
    rectangle(float l1,float w1)
     {
         l=l1;
         w=w1;
     }

     // copy contructor

     rectangle(rectangle &R)
     {

      l=R.l;
      w=R.w;
     }

     void display()
     {

         cout<<"the length of rectangle:"<<l<<endl;
         cout<<"the width of rectangle:"<<w<<endl;
     }
     ~rectangle() // dec
     {
         cout<<"the decon called"<<endl;
     }

};

int main()
{

    rectangle r1(5.5 ,6.6),r2,r3(r1);
    r1.display();
    r2.display();
    r3.display();
    return 0;
}
