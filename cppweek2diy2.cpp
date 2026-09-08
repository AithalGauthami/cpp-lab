#include <iostream>
using namespace std;
void power(int base,int exp=2)
{
        int i,p=1;
        for(i=0;i<exp;i++)
            p=p*base;
        cout<<base<<" to the power "<<exp<<" = "<<p;
        cout<<endl;
}
int main()
{
        power(5);
        power(2,10);
        return 0;
}