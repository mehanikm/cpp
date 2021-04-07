#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Number to check: ";
    cin >> a;

    if (a % 2 == 1)
        cout << "Number is odd" << endl;
    else
        cout << "Number is even" << endl;
}
