#include <iostream>
using namespace std;
class Order
{
    int id;
    static int orderid;
    public:
    Order()
    {
        id=orderid++;
    }
    void display()
    {
        cout<<"ORDER ID="<<id<<endl;
    }

};
int Order::orderid=1001;
int main()
{
    Order customer1,customer2,customer3,customer4;
    customer1.display();
    customer2.display();
    customer3.display();
    customer4.display();
    return 0;
}