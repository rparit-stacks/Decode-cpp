#include <iostream>

class AreaCalculator {
public:
    // Calculate the area of a rectangle
    double calculateRectangleArea(double length, double width) {
        return length * width;
    }

    // Calculate the area of a circle
    double calculateCircleArea(double radius) {
        return 3.14159265359 * radius * radius;
    }

    // Calculate the area of a triangle
    double calculateTriangleArea(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    AreaCalculator calculator;

    double rectangleArea = calculator.calculateRectangleArea(5.0, 3.0);
    double circleArea = calculator.calculateCircleArea(2.5);
    double triangleArea = calculator.calculateTriangleArea(4.0, 6.0);

    std::cout << "Area of the rectangle: " << rectangleArea << std::endl;
    std::cout << "Area of the circle: " << circleArea << std::endl;
    std::cout << "Area of the triangle: " << triangleArea << std::endl;

    return 0;
}
