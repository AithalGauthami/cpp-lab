#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    void setData(float r, float i)
    {
        real = r;
        imag = i;
    }

    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

int main()
{

    Complex num[2];

    num[0].setData(2, 3);
    num[1].setData(5, -2);

    cout << "Complex Numbers:" << endl;

    num[0].display();
    num[1].display();

    return 0;
}