#include <iostream>
#include <string>

using namespace std;

string bitop(int n)
{
    if (n & 1)
        return "Number is odd";
    else
        return "Number is even";
}

string modop(int n)
{
    if (n % 2)
        return "Number is odd";
    else
        return "Number is even";
}

string ternop(int n)
{
    return ((n % 2) ? "Number is odd" : "Number is even");
}

int main()
{
    int a;
    cout << "Number to check: ";
    cin >> a;

    cout << "Bit operator" << endl;
    // checking e.g. for 10 -> 10 == 0b1010 -> 0b1010 & 0b0001 == 0b0000 == 0; e.g. for 13 -> 13 == 0b1101 -> 0b1101 & 0b0001 == 0b0001 == 1;
    cout << bitop(a) << endl;

    cout << "Modulus operator" << endl;
    cout << modop(a) << endl;

    cout << "Ternary operator" << endl;
    cout << ternop(a) << endl;
}
