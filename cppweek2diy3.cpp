#include <iostream>
using namespace std;

// Overload 1: Returns the smaller of two integers
inline int minVal(int a, int b) {
    return (a < b) ? a : b;
}

// Overload 2: Returns the smallest of three integers
// It reuses the two-parameter version for clean, efficient code
inline int minVal(int a, int b, int c) {
    return minVal(minVal(a, b), c);
}

int main() {
    int x = 15;
    int y = 42;
    int z = 7;

    
    cout << "The smaller of " << x << " and " << y << " is: " 
              << minVal(x, y) << std::endl;

    
    cout << "The smallest of " << x << ", " << y << ", and " << z << " is: " 
              << minVal(x, y, z) << std::endl;

    return 0;
}