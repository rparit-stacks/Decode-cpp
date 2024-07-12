// Question: Create a class Animal with a method eat(). Create a subclass Bird
// that inherits from Animal and adds a method fly(). Then, create a subclass
// Penguin that inherits from Bird and adds a method swim(). Demonstrate how an
// instance of Penguin can use methods from all three classes.

#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "hey i am eating" << endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        cout << "hey i am Flying" << endl;
    }
};

class Penguin : public Bird {
public:
    void swim() {
        cout << "hey i am swiming" << endl;
    }
};

int main() {
    Penguin chichi;
    chichi.swim();
    chichi.fly();
    chichi.eat();

    return 0;
}