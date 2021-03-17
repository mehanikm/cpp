#include <iostream>

using namespace std;
int b;
int *by_ptr()
{
    int a = 111;
    int *pa = &a;
    return pa;
}

int &by_ref()
{
    return b;
}

int by_val()
{
    int c = 333;
    return c;
}

int main()
{
    by_ref() = 222;
    cout << by_ptr() << endl;
    cout << by_ref() << endl;
    cout << by_val() << endl;
}
