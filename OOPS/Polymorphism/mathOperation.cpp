// Question: In cpp, create a class MathOperations with methods add and add
// (overloaded) to add two integers and two doubles respectively. Demonstrate
// how these methods can be called from the main method.

#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations adding;
    cout << adding.add(10, 20) << endl;
    cout << adding.add(10.1, 20.1);

    return 0;
}