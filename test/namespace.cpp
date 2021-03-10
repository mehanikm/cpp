#include <iostream>
using namespace std;

namespace testspace
{
    int a = 10;
    int b = 1;
    int adder(int n, int m)
    {
        cout << "adding numbers..." << endl;
        return n + m;
    }
}
using namespace testspace;

int main()
{
    int result = adder(a, b);
    cout << result << endl;

    cout << "a from testspace is " << testspace::a << endl;

    return 0;
}
