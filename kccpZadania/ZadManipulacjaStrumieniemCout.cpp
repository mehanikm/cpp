#include <iostream>
#include <iomanip>

using namespace std;

int main()
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
