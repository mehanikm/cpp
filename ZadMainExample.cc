#include <iostream>
#include <string>
using namespace std;

extern "C"
{
    int ext_1(void) { return 1; };
    int ext_2(int a) { return a; };
    // int ext_2(void) { return 22; }; // funny error
}

int normal_1(int a) { return 2 * a; };
string normal_2(string a) { return a + "_end"; };
int normal_3(void) { return 99; };

void call_func(string func)
{
    if (func == "ext_1")
        cout << "" << ext_1()
             << endl;

    else if (func == "ext_2")
        cout << "" << ext_2(2)
             << endl;

    else if (func == "normal_1")
        cout << "" << normal_1(5)
             << endl;

    else if (func == "normal_2")
        cout << "" << normal_2("Norm_2")
             << endl;

    else if (func == "normal_3")
        cout << "" << normal_3()
             << endl;
}

int main(int argc, char *argv[])
{
    for (int count = 1; count < argc; count++)
        call_func(argv[count]);

    return 0;
}
