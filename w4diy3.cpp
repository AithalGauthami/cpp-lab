#include <iostream>
using namespace std;

class Tracer
{
    int id;

public:
    Tracer(int i) : id(i)
    {
        cout << "Construct #" << id << endl;
    }

    ~Tracer()
    {
        cout << "Destruct #" << id << endl;
    }
};

int main()
{
    cout << "Enter loop\n";

    for (int i = 1; i <= 3; i++)
    {
        Tracer *p = new Tracer(i);

        cout << "Working with #" << i << endl;

        delete p;
    }

    cout << "Loop finished\n";

    return 0;
}
