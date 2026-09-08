#include<iostream>
using namespace std;
double volume(int x)
{
    return x*x*x;
}
double volume(int l,int b,int h)
{
    return l*b*h;
}
double volume(double r, double h)
{
    return 3.14*r*r*h;
}
int main()
{
        cout<<"Volume of cube(3)= "<<volume(3);
        cout<<"\nVolume of cuboid (2*3*4)= "<<volume(2,3,4);
        cout<<"\nVolume of cylinder(2,3)= "<<volume(2.0,3.0);
        return 0;
}