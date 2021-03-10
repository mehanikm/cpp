#include <iostream>
#include <string>
using namespace std;

int main()
{
    string know("I know everything");
    string dontknow = "I don't know anything";

    cout << "know: " << know << endl
         << "dontknow: " << dontknow << endl;

    if (know == dontknow)
        cout << "same quotes" << endl;

    if (know != dontknow)
        cout << "different quotes" << endl;

    cout << "know: " << know << " < dontknow: " << dontknow << " ?" << endl;
    if (know < dontknow)
        cout << "true\n";
    else
        cout << "false\n";

    know = "Wow " + know + "!";

    cout << "know: " << know << endl;

    dontknow[0] = 'U';

    cout << "changed dontknow: " << dontknow << endl;

    return 0;
}
