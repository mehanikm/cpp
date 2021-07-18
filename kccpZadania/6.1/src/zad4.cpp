#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include "../include/zad4.h"

using namespace std;

void Zad4::task0()
{
    float n = 9.0 / 7.0;

    cout << n << endl;
    cout << "output0: " << setfill('0') << setw(8) << right << n << endl;
    cout << "output1: " << setfill(' ') << setw(9) << right << setprecision(7) << n << endl;
    cout << "output2: " << setfill(' ') << setw(9) << right << n << endl;

    cout << setfill('-') << setw(30) << "" << endl;

    cout << "average:" << endl;

    cout << "output3: " << setfill('0') << setw(9) << right << setprecision(7) << n << endl;
}

void Zad4::task1()
{
    cout << "Standard output" << endl;
    cerr << "Error output" << endl;

    writefile("sup boys");
    readfile();
}

void Zad4::task2()
{
    // No big difference in what user sees/does
    cout << "Print cpp" << endl;
    printf("Print c\n");

    int num;
    cout << "Input cpp: ";
    cin >> num;
    printf("Input c: ");
    scanf(" %d", &num);

    int *pointer;
    pointer = &num;

    cout << "Pointer cpp: " << pointer << endl;
    printf("Pointer c: %p\n", pointer);

    cout << "Points to cpp " << *pointer << endl;
    printf("Points to c: %d\n", *pointer);

    cout << "Hex C++: " << hex << num << endl;
    printf("Hex C: %x\n", num);
}

void Zad4::task3()
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

void Zad4::task4()
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

void Zad4::task5()
{
    cout << forloop() << endl;
    cout << whileloop() << endl;
    cout << dowhileloop() << endl;
}

void Zad4::task6()
{
    enum funcs
    {
        func1,
        func2,
        func3
    };

    funcs func = func1;

    switch (func)
    {
    case func1:
        cout << "YOUR CHOICE IS FUNCTION NUMBER 1" << endl;
        break;

    case func2:
        cout << "YOUR CHOICE IS FUNCTION NUMBER 2" << endl;
        break;

    case func3:
        cout << "YOUR CHOICE IS FUNCTION NUMBER 3" << endl;
        break;
    }
}

string Zad4::bitop(int n)
{
    if (n & 1)
        return "Number is odd";
    else
        return "Number is even";
}

string Zad4::modop(int n)
{
    if (n % 2)
        return "Number is odd";
    else
        return "Number is even";
}

string Zad4::ternop(int n)
{
    return ((n % 2) ? "Number is odd" : "Number is even");
}

void Zad4::writefile(string str)
{
    ofstream writestream("str.txt");
    writestream << str;
    writestream.close();
    cout << "Data written to str.txt " << endl;
}

void Zad4::readfile()
{
    string data;
    ifstream readstream("str.txt");
    getline(readstream, data);
    readstream.close();

    cout << "Data read: " << data;
}

int Zad4::forloop()
{
    cout << "For loop" << endl;
    for (int i = 0; i < 10; i++)
    {

        if (i == 3)
            continue;
        if (i == 8)
            return i;
        cout << i << endl;
    }
}

int Zad4::whileloop()
{
    cout << "While loop" << endl;
    int i = 0;
    while (true)
    {
        if (i++ == 4)
            continue;

        if (++i >= 7)
            break;
        cout << i << endl;
    }
    return i;
}

int Zad4::dowhileloop()
{
    cout << "Do\\While loop" << endl;
    int i = 0;
    do
    {

        if (++i == 7)
            break;
        cout << i << endl;
    } while (i++ != 8);

    return i;
}
