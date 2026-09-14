#include <iostream>
using namespace std;

class Matrix
{
    int **a;
    int m, n;

public:
    // Constructor
    Matrix(int rows, int cols)
    {
        m = rows;
        n = cols;

        a = new int*[m];

        for (int i = 0; i < m; i++)
            a[i] = new int[n];
    }

    // Deep Copy Constructor
    Matrix(const Matrix &x)
    {
        m = x.m;
        n = x.n;

        a = new int*[m];

        for (int i = 0; i < m; i++)
        {
            a[i] = new int[n];

            for (int j = 0; j < n; j++)
                a[i][j] = x.a[i][j];
        }
    }

    // Input
    void input()
    {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
    }

    // Display
    void display()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";

            cout << endl;
        }
    }

    // Destructor
    ~Matrix()
    {
        for (int i = 0; i < m; i++)
            delete[] a[i];

        delete[] a;
    }
};

int main()
{
    Matrix A(2, 2);

    cout << "Enter 4 elements:\n";
    A.input();

    cout << "Original Matrix:\n";
    A.display();

    Matrix B = A;   // Deep copy

    cout << "Copied Matrix:\n";
    B.display();

    return 0;
}