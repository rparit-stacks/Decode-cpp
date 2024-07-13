// Write a C++ program that demonstrates function overloading with two functions
// named calculateArea. One function calculates the area of a rectangle given
// its length and width, and the other calculates the area of a circle given its
// radius.

#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Shape {
public:
    float radius;

    void calculateArea() {
        cout << "Area of circle is : " << 3.14 * radius * radius << endl;
    }
    void calculateArea(int length, int width) {
        cout << "Area of Rectangle is : " << length * width << endl;
    }
};
int main() {
    Shape circle;
    circle.radius = 5;
    circle.calculateArea();
    Shape rectange;
    rectange.calculateArea(10, 50);

    return 0;
}