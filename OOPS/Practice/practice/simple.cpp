/*Create 2 classes:
1. SimpleCalculator - Takes input of 2 numbers using a utility function and
performs +, -, *, / and displays the results using another function.
2. ScientificCalculator - Takes input of 2 numbers using a utility function and
performs any four scientific operations of your choice and displays the results
using another function.

Create another class HybridCalculator and inherit it using these 2 classes:
Q1. What type of Inheritance are you using?
Q2. Which mode of Inheritance are you using?
Q3. Create an object of HybridCalculator and display results of simple and
scientific calculator. Q4. How is code reusability implemented?*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class simpleCalculator {
public:
    int a;
    int b;

    simpleCalculator(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void add() {
        cout << a + b << endl;
    }
    void subtract() {
        cout << a - b << endl;
    }
    void multiply() {
        cout << a * b << endl;
    }
    void divide() {
        cout << (float)a / (float)b << endl;
    }
};
class scientificCalculator {
public:
    double num1, num2, result;

    void get_input() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    void power() {
        result = pow(num1, num2);
    }

    void square_root() {
        result = sqrt(num1);
    }

    void logarithm() {
        result = log(num1);
    }

    void exponential() {
        result = exp(num1);
    }

    void display_result() {
        cout << "Result: " << result << endl;
    }
};

int main() {
    simpleCalculator obj1(10, 5);
    obj1.add();
    obj1.subtract();
    obj1.multiply();
    obj1.divide();
    return 0;
}
