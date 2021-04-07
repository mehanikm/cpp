#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Number to check: ";
    cin >> a;

    cout << "Bit operator" << endl;
    // checking e.g. for 10 -> 10 == 0b1010 -> 0b1010 & 0b0001 == 0b0000 == 0; e.g. for 13 -> 13 == 0b1101 -> 0b1101 & 0b0001 == 0b0001 == 1;
    if (a & 1)
        cout << "Number is odd" << endl;
    else
        cout << "Number is even" << endl;

    cout << "Modulus operator" << endl;
    if (a % 2)
        cout << "Number is odd" << endl;
    else
        cout << "Number is even" << endl;

    cout << "Ternary operator" << endl;
    cout << ((a % 2) ? "Number is odd" : "Number is even") << endl;
}
