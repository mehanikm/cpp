#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual double perimeter() = 0;
    virtual double area() = 0;
    virtual double distance(int x){};
};

class Triangle : public Shape
{
public:
    int side;
    int height;
    Triangle(int a, int b)
    {
        side = a;
        height = b;
    }
    double perimeter()
    {
        return side * 3;
    }
    double area()
    {
        return (side * height) / 2;
    }
};

class Square : public Shape
{
public:
    int side;
    Square(int a)
    {
        side = a;
    }
    double perimeter()
    {
        return side * 4;
    }
    double area()
    {
        return side * side;
    }
};

class Rectangle : public Shape
{
public:
    int sideA;
    int sideB;
    Rectangle(int a, int b)
    {
        sideA = a;
        sideB = b;
    }
    double perimeter()
    {
        return (sideA * 2) + (sideB * 2);
    }
    double area()
    {
        return sideA * sideB;
    }
};

class Circle : public Shape
{
public:
    int radius;
    Circle(int a)
    {
        radius = a;
    }
    double perimeter()
    {
        return radius * 2 * 3.14;
    }
    double area()
    {
        return 3.14 * radius * radius;
    }
    double distance(int dist)
    {
        return sqrt(dist / 3.14);
    }
};

int main()
{
    cout << "Triangle" << endl;
    Shape *objTriangle = new Triangle(5, 5);
    cout << objTriangle->perimeter() << endl;
    cout << objTriangle->area() << endl;
    cout << endl;

    cout << "Square" << endl;
    Shape *objSquare = new Square(5);
    cout << objSquare->perimeter() << endl;
    cout << objSquare->area() << endl;
    cout << endl;

    cout << "Rectangle" << endl;
    Shape *objRectangle = new Rectangle(5, 5);
    cout << objRectangle->perimeter() << endl;
    cout << objRectangle->area() << endl;
    cout << endl;

    cout << "Circle" << endl;
    Shape *objCircle = new Circle(5);
    cout << objCircle->perimeter() << endl;
    cout << objCircle->area() << endl;
    cout << objCircle->distance(100) << endl;

    return 0;
}
