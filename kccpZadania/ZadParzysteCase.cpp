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
    int n;
    char f;

    cout << "Input number: ";
    cin >> n;

    cout << "Select function: [m]odulus, [b]itwise, [t]ernary: ";
    cin >> f;

    switch (f)
    {
    case 'm':
        cout << modop(n) << endl;
        break;

    case 'b':
        cout << bitop(n) << endl;
        break;

    case 't':
        cout << ternop(n) << endl;
        break;

    default:
        cout << "Something's wrong, I can feel it" << endl;
    }
}
