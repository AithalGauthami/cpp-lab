#include <iostream>
using namespace std;

class Money 
{
    int rupees, paise;
    public:
    Money(int r = 0, int p = 0) 
    {
        rupees = r + p / 100;
        paise = p % 100;
    }
    Money operator+(Money m) 
    {
        return Money(rupees + m.rupees, paise + m.paise);
    }
    Money operator-(Money m) 
    {
        int a = rupees * 100 + paise;
        int b = m.rupees * 100 + m.paise;
        return Money(0, a - b);
    }
    void show() {
        cout << rupees << "." << paise<<endl;
    }
};
int main() 
{
    Money a(88, 25), b(75, 55);
    Money c = a + b;
    Money d = a - b;
    cout << "Addition: "<<endl;
    c.show();
    cout << "Subtraction: "<<endl;
    d.show();
    return 0;
}