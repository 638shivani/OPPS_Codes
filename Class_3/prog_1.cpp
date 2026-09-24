
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

//same like above but different approach
#include<iostream>
using namespace std;
class time_sum
{ private:
    int hour;
    int sec;
    int mini;

  public:
      void gettimes();
      void settimes(int H ,int M ,int S);
      void sumtimes(time_sum t1,time_sum t2);

};

void time_sum :: gettimes()
{

    cout<<"enter the hour:"<< hour<< endl;
    cout<<"enter the mini: " << mini<< endl;
    cout<<"enter the sec: "  << sec << endl;

}

void time_sum ::  settimes(int H ,int M ,int S)
{

    hour=H;
    mini=M;
    sec=S;
}

void time_sum :: sumtimes(time_sum t1,time_sum t2)
{

    hour = t1.hour+t2.hour;
    mini = t1.mini+t2.mini;
    sec  = t1.sec+ t2.sec;
    cout<<"the toatl hour is:"<< hour <<endl;
    cout<<"the toatl mini is:"<< mini <<endl;
    cout<<"the toatl sec is:"<< sec <<endl;

}

int main()
{
    time_sum t1,t2,t3;
    t1.settimes(5,25,30);
    t2.settimes(5,25,30);
    t1.gettimes();
    t2.gettimes();
    t3.sumtimes(t1,t2);
    //cout<<"the total times of suming both :"<< endl;
    //t3.gettimes();
    return 0;


}
