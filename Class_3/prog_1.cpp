
//adding the t1+t2
#include<iostream>
using namespace std;

class Time
{
private:
    int mini;
    int hour;
    int sec;

public:
    void set_time()
    {
        cout<<"enter the hour";
        cin>>hour;
        cout<<"enter the minute";
        cin>>mini;
        cout<<"enter the sec";
        cin>>sec;

    }

    int gethour()
    {

      return hour;
    }
    int getmini()
    {

      return mini;
    }
    int getsec()
    {

      return sec;
    }
public:
    void add_time(Time t1,Time t2)
    {
        hour=t1.hour+t2.hour;
        mini=t1.mini+t2.mini;
        sec=t1.sec+t2.sec;

    }

};

int main()
{
    Time t1;
    Time t2;
    Time t3;



    t1.set_time();
    t2.set_time();
    t3.add_time(t1,t2);

    cout<<"hour="<<t3.gethour()<<"\n";
    cout<<"mini="<<t3.getmini()<<"\n";
    cout<<"sec="<<t3.getsec()<<"\n";

}
