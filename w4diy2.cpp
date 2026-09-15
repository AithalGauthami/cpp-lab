#include <iostream>
using namespace std;

class Stack
{
    int *a;
    int top;
    int size;

public:
    
    Stack(int n)
    {
        size = n;
        a = new int[size];
        top = -1;
    }

    
    void push(int x)
    {
        if (top == size - 1)
            cout << "Stack Overflow\n";
        else
        {
            top++;
            a[top] = x;
        }
    }

    
    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow\n";
        else
        {
            cout << "Popped: " << a[top] << endl;
            top--;
        }
    }

   
    void display()
    {
        for (int i = top; i >= 0; i--)
            cout << a[i] << " ";

        cout << endl;
    }

    
    ~Stack()
    {
        delete[] a;
    }
};

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack: ";
    s.display();

    s.pop();

    cout << "After pop: ";
    s.display();

    return 0;
}
