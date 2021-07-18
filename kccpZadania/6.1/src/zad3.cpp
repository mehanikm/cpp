#include <string>
#include "../include/zad3.h"
#include <cmath>
using namespace std;

void Zad3::task1()
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

void Zad3::task2()
{
    int arr[] = {0, 1, 2, 6, 4};
    int i = 2;

    for (; i < 6; i++)
    {
        cout << "I[q]: " << i[arr] << endl;
        cout << "Q[i]: " << arr[i] << endl
             << endl;
    }
    // Table elements can be accessed both from table[index] and index[table] format
}

void Zad3::task4()
{
    // 1
    char choice;
    cout << "Function to execute? a/b: ";
    cin >> choice;
    exec(choice);

    // 2
    cout << "Wanna exec another one? a/b: ";
    cin >> choice;
    exec(choice);
}

void Zad3::task6()
{
    int x = 1, y = 2, z = 3;
    int result[] = {4, 4, 4, 4};

    // These things generate lots of warnings [multiple unsequenced modifications to 'x']
    result[0] *= -++x * x-- + -y-- % ++z;
    cout << "0. " << result[0] << endl;

    result[1] *= -(++x) * (x--) + -(y--) % (++z);
    cout << "1. " << result[1] << endl;

    result[2] *= (-(++x)) * (x--) + (-(y--)) % (++z);
    cout << "2. " << result[2] << endl;

    result[3] *= ((-(++x)) * (x--)) + ((-(y--)) % (++z));
    cout << "3. " << result[3] << endl;
}

void Zad3::task7()
{
    // Dec to bin
    unsigned int dec;
    string val;

    cout << "Input decimal number: ";
    cin >> dec;

    while (dec != 0)
    {
        val = val + to_string(dec % 2);
        dec /= 2;
    }

    reverse(val.begin(), val.end());
    cout << val << endl;

    // Bin to dec
    unsigned int num = 0;
    string bin;
    cout << "Input binary number: ";
    cin >> bin;

    for (int i = bin.length() - 1; i >= 0; i--)
        if (bin[bin.length() - i - 1] == '1')
            num = num + 1 * pow(2, i);

    cout << num << endl;
}

void Zad3::funcA()
{
    cout << "we Are here" << endl;
}

void Zad3::funcB()
{
    cout << "and here Bro" << endl;
}

void Zad3::exec(char what)
{
    switch (what)
    {
    case 'a':
        funcA();
        break;
    case 'b':
        funcB();
        break;
    default:
        cout << "input is Dumb" << endl;
    }
}
