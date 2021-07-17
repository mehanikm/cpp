#include <iostream>
#include "src/zad1.cpp"

using namespace std;

class ZadKcpp
{
public:
    int selectSection();

private:
    void Zadanie1();
    void Zadanie2();
    void Zadanie3();
    void Zadanie4();
    void Zadanie5();
};

int ZadKcpp::selectSection()
{
    int section;
    cout << "Please select section from 1 to 5: ";
    cin >> section;

    switch (section)
    {
    case 1:
        Zadanie1();
        break;
    case 2:
        // Zadanie2();
        break;
    case 3:
        // Zadanie3();
        break;
    case 4:
        // Zadanie4();
        break;
    case 5:
        // Zadanie5();
        break;
    default:
        cout << "Have a nice day." << endl;
        break;
    }
    return 0;
}

void ZadKcpp::Zadanie1()
{
    Zad1 z1;
    int a = 10, b = 5;
    cout << "Nothing to select here, only one task is present: 1.1" << endl;
    cout << "Here we have basic math operations. Our numbers are " << a << " and " << b << endl;
    cout << "Addition: " << z1.add(a, b) << endl;
    cout << "Subtraction: " << z1.sub(a, b) << endl;
    cout << "Multiplication: " << z1.mult(a, b) << endl;
    cout << "Division: " << z1.div(a, b) << endl;
    cout << "Kiddition: " << z1.pow(a, b) << endl;
}

int main()
{
    ZadKcpp entry;
    entry.selectSection();
    return 0;
}
