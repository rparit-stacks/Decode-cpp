// Question : Create two classes Flyer and Swimmer with methods fly() and swim()
// respectively.Then,
// create a class FlyingFish that inherits from both Flyer and Swimmer.
// Demonstrate how FlyingFish can use methods from both parent classes.

#include <bits/stdc++.h>

#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Flyer {
public:
    void fly() {
        cout << "Hey I am flying" << endl;
    }
};

class Swimmer {
public:
    void swim() {
        cout << "I can swim also" << endl;
    }
};

class FlyingFish : public Flyer, public Swimmer {
public:
    string name;
    ~FlyingFish() {
        fly();
        swim();
        cout << this->name;
    }
};

int main() {
    FlyingFish Fish1;
    Fish1.name = "memo";

    return 0;
}
