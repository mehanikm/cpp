#include <iostream>
#include "../include/zad2.h"
using namespace std;

int *Zad2::by_ptr()
{
    int a = 0;
    int *pa = &a;
    return pa;
}

int &Zad2::by_ref()
{
    int b;
    return b;
}

int Zad2::by_val()
{
    int c = 2;
    return c;
}

int Zad2::main()
{
    by_ref() = 1;
    cout << "By ptr: " << by_ptr() << endl;
    cout << "By ref: " << by_ref() << endl;
    cout << "By val: " << by_val() << endl;
    return 0;
}
