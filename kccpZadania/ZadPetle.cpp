#include <iostream>

using namespace std;

int forloop()
{
    cout << "For loop" << endl;
    for (int i = 0; i < 10; i++)
    {

        if (i == 3)
            continue;
        if (i == 8)
            return i;
        cout << i << endl;
    }
}

int whileloop()
{
    cout << "While loop" << endl;
    int i = 0;
    while (true)
    {
        if (i++ == 4)
            continue;

        if (++i >= 7)
            break;
        cout << i << endl;
    }
    return i;
}

int dowhileloop()
{
    cout << "Do\\While loop" << endl;
    int i = 0;
    do
    {

        if (++i == 7)
            break;
        cout << i << endl;
    } while (i++ != 8);

    return i;
}

int main()
{
    cout << forloop() << endl;
    cout << whileloop() << endl;
    cout << dowhileloop() << endl;
}
