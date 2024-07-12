// Question: Create a class Person with attributes name and age. Then, create a
// subclass Student that inherits from Person and has an additional attribute
// student_id. Demonstrate how to create an instance of Student and access its
// attributes.

#include <bits/stdc++.h>

#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class person {
public:
    string name;
    int age;
};

class student : public person {
public:
    int student_id;

    ~student() {
        cout << "The Name Of The Student Is : " << this->name << endl;
        cout << "The Id Of The Student Is : " << this->student_id << endl;
        cout << "The age Of The Student Is : " << this->age << endl;
    }
};

int main() {
    student student1;
    student1.name = "Rohit Parit";
    student1.age = 21;
    student1.student_id = 313568;

    return 0;
}