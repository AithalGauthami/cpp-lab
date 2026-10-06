#include<iostream>
using namespace std;
class complex{


        double re,im;
        public:complex(double r=0,double i=0):re(r),im(i){}
        complex operator+(const complex &o)const{
            return complex(re+o.re,im+o.im);
        }
        bool operator==(const complex &o)const{
            return re==o.re&&im==o.im;
        }
        friend ostream& operator<<(ostream &os,const complex &c)
        {
            os<<c.re<<(c.im>=0?"+":" ")<<c.im<<"i";
            return os;

        } 
        };
int main()
{
        complex a(2,3),b(1,-4);
        cout<<"a="<<a<<",b="<<b<<endl;
        cout<<"a+b="<<(a+b)<<endl;
        cout<<"a==b?"<<(a==b?"yes":"no")<<endl;
        return 0;
}