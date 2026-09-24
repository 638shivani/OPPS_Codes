//finding area of rectangle using class and obj
#include<iostream>
using namespace std;

class rec_area
{
private:
     float length;
      float width;
public:

    void setData(float L , float W);
    void display();
    void area();
};

void rec_area :: display()

    {
        cout<<"the length:"<<length<<endl;
        cout<<"the width:"<<width<<endl;
        //cout<<"the area:"<<AREA<<endl;
    }
void rec_area :: area()
{

   float AREA = length * width;
   cout<<"the area:"<<AREA<<endl;//beacuse AREA is piblic so it not come display
}

 void rec_area :: setData(float L , float W)
  {
        length=L;
        width=W;
    }

int main()
{
    rec_area a1;
    a1.setData(5,5);
    a1.display();
    a1.area();
    return 0;
}
