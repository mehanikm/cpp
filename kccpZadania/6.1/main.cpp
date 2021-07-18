#include <iostream>
#include "src/zad1.cpp"
#include "src/zad2.cpp"
#include "src/zad3.cpp"
#include "src/zad4.cpp"

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
        Zadanie2();
        break;
    case 3:
        Zadanie3();
        break;
    case 4:
        Zadanie4();
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
    cout << "Kiddition: " << z1.kid(a, b) << endl;
}

void ZadKcpp::Zadanie2()
{
    Zad2 z2;
    cout << "Nothing to select here, only one task is present: 2.1" << endl;
    z2.main();
}

void ZadKcpp::Zadanie3()
{
    Zad3 z3;
    int task;
    cout << "Select task [1, 2, 4, 6, 7]: ";
    cin >> task;
    switch (task)
    {
    case 1:
        z3.task1();
        break;
    case 2:
        z3.task2();
        break;
    case 4:
        z3.task4();
        break;
    case 6:
        z3.task6();
        break;
    case 7:
        z3.task7();
        break;

    default:
        cout << "Have a nice day." << endl;
        break;
    }
}

void ZadKcpp::Zadanie4()
{
    Zad4 z4;
    int task;
    cout << "Select task [0, 1, 2, 3, 4, 5, 6]: ";
    cin >> task;
    switch (task)
    {
    case 0:
        z4.task0();
        break;
    case 1:
        z4.task1();
        break;
    case 2:
        z4.task2();
        break;
    case 3:
        z4.task3();
        break;
    case 4:
        z4.task4();
        break;
    case 5:
        z4.task5();
        break;
    case 6:
        z4.task6();
        break;

    default:
        cout << "Have a nice day." << endl;
        break;
    }
}

int main()
{
    ZadKcpp entry;
    entry.selectSection();
    return 0;
}
