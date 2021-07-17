#include <string>
#include "../include/zad1.h"
using namespace std;

int Zad1::add(int a, int b)
{
    return a + b;
}

int Zad1::sub(int a, int b)
{
    return a - b;
}

int Zad1::mult(int a, int b)
{
    return a * b;
}

int Zad1::div(int a, int b)
{
    return a / b;
}

int Zad1::kid(int a, int b)
{
    string sa = to_string(a);
    string sb = to_string(b);
    string s = sa + sb;
    int res = stoi(s);

    return res;
}
