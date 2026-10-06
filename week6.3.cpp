#include<iostream>
using namespace std;
class counter
{
        int v;
        public:counter(int v=0):v(v){}
        counter & operator++()
        {
            ++v;
            return *this;
        }
        counter operator++(int)
        {
                counter t=*this;
                ++v;
                return t;

        }
        int value()
        const{
            return v;
        }
        };
class safearr
{
    int a[5]={10,20,30,40,50};
    public:
    int & operator[] (int i)
    {
        if(i<0||i>=5)
        {
            cout<<"out of range!\n"; return a[0]; }
return a[i];
}
};
int main() {
counter c(5); ++c; c++;

cout << "Counter = " << c.value() <<endl;
safearr s; cout << "s[2] = " << s[2] << endl;

s[10] = 99;
return 0;
}

        