#include <iostream>
using namespace std;

void funcA()
{
    cout << "we Are here" << endl;
}

void funcB()
{
    cout << "and here Bro" << endl;
}

void exec(char what)
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

int main(int argc, char *argv[])
{
    // 1
    if (argc >= 2)
        exec(argv[1][0]);

    // 2
    cout << "Wanna exec another one? a/b" << endl;
    char choice;
    cin >> choice;
    exec(choice);

    return 0;
}
