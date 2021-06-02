#include <iostream>
using namespace std;

int main()
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

    return 0;
}
