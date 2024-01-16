// Create a base class Shape with methods to calculate area and perimeter. Derive classes like Circle and Rectangle from it. Demonstrate inheritance by creating instances of these derived classes.

#include <iostream>

using namespace std;

class Shape
{
public:
    int radius;
    int len;
    int wid;

public:
};

class circle : public Shape
{
public:
    int areaOfCircle()
    {
        return 3.14 * radius * radius;
    }
    int perimeterOfcircle()
    {
        return radius;
    }
};

class Rectangle : public Shape
{
public:
    int areaOfRectangle()
    {
        return len * wid;
    }
    int perimeterOfRectangle()
    {
        return len * wid;
    }
};

int main()
{
    Rectangle Rect;
    circle cir;

    Rect.len = 20;
    Rect.wid = 5;
    cir.radius = 9;

    cout<<"the area of rectangle is : "<< Rect.areaOfRectangle()<<endl<<"The perimeter of rectangle is : "<< Rect.perimeterOfRectangle();
    cout << "Area of circle is: " << cir.areaOfCircle();
    cout << "\nPerimeter of Circle is: " << cir.perimeterOfcircle();
}