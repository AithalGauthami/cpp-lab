#include <iostream>
using namespace std;
class Time
{
    int hour,minute;
    public:
    Time(int hh=0,int mm=0):hour(hh),minute(mm) {}
    friend Time laterOf(const Time &a,const Time &b);
    void display()
    {
        cout<<hour<<"hrs "<<minute<<" min"<<endl;
    }
};
Time laterOf(const Time &a,const Time &b)
{
    int total_a=(a.hour*60)+a.minute;
    int total_b=(b.hour*60)+b.minute;
    if(total_a>total_b)
    return Time(a.hour,a.minute);
    else
    return Time(b.hour,b.minute);
}
int main()
{
    Time t1(3,45),t2(2,35);
    Time t3=laterOf(t1,t2);
    t3.display();
    return 0;
}