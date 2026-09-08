#include<iostream>
#include<string>
using namespace std;
class bankaccount
{
        private:string owner;
        double balance;
    public:void open(const string &name,double initial)
    {
            owner=name;
            balance=(initial>0)?initial:0;

    }
    void deposit(double amt)
    {
            if(amt>0)
                balance+=amt;
    }
    bool withdraw(double amt)
    {
            if(amt>0&&amt<=balance)
            {
                balance-=amt;
                return true;
            }
            return false;
    }
    double getbalance() const{
        return balance;
    }
    string getowner() const{
        return owner;
    }
};
int main()
{
        bankaccount a1,a2;
        a1.open("Asha",1000);
        a2.open("Ram",500);
        a1.deposit(500);
        a2.deposit(1000);
        if(!a1.withdraw(12000))
        cout<<"Withdrawal denied-insufficient \n";
        a2.withdraw(900);
        cout<<a2.getowner()<<"\n Balance= "<<a2.getbalance();
        return 0;
}