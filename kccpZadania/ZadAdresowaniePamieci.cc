#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    // Addresses go from highest to lowest
    unsigned long p = (unsigned long)&a;
    cout << "Address of A: " << &a << "\t dec: " << p << endl;

    p = (unsigned long)&b;
    cout << "Address of B: " << &b << "\t dec: " << p << endl;

    p = (unsigned long)&c;
    cout << "Address of C: " << &c << "\t dec: " << p << endl;
}