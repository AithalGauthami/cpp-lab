#include <iostream>
using namespace std;
class Counter
{
    private:
    int number,ob;
    static int object,created;
    public:
    Counter()
    {
        created++;
        ob=object++;
        cout<<"created c["<<ob<<"]"<<endl;
    }
    void increment()
    {
        number++;
    }
    void reset()
    {
        number=0;
    }
    ~Counter()
    {
        object--;
        cout<<"destroyed c["<<ob<<"]"<<endl;
    }
    int get()
    {
        return number;
    }
    static int result()
    {
        return object;
    }
    static int createdob()
    {
        return created;
    }
};
int Counter::object=0;
int Counter::created=0;
int main()
{
    Counter c[3];
    for(int i=0;i<3;i++)
    {
        c[i].reset();
    }
    c[0].increment();
    c[0].increment();
    c[1].increment();
    c[2].increment();
    c[1].increment();
    c[1].increment();
    c[0].increment();
    c[1].increment();
    cout<<"Number of objects created="<<Counter::createdob()<<endl;
    cout<<"Alive="<<Counter::result()<<endl;
    for(int i=0;i<3;i++)
    cout<<"c["<<i<<"] = "<<c[i].get()<<endl;
    return 0;
}