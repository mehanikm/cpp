#include <iostream>
using namespace std;

int main()

{
    int arr[] = {0, 1, 2, 6, 4};
    int i = 2;

    for (; i < 6; i++)
    {
        cout << "I[q]: " << i[arr] << endl;
        cout << "Q[i]: " << arr[i] << endl
             << endl;
    }
    // Table elements can be accessed both from table[index] and index[table] format
    return 0;
}
