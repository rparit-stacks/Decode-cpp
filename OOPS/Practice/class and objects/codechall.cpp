#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

// WAP to create a class for the dog (maybe a pet dog).

// Define data members such as age, color, breed, and it’s pet name.
// Define a function to print all the data members.
// Declare two objects for the class Dog, initialize their attributes and then print all the data members by calling a function.

class Animal
{
public:
    int age;
    string color;
    string breed;
    string petName;

    void getAge()
    {
        cout << age << endl;
    }
    void getColor()
    {
        cout << color << endl;
    }
    void getBreed()
    {
        cout << breed << endl;
    }
    void getPetName()
    {
        cout << petName << endl;
    }
};

int main()
{
    Animal dog;
    dog.petName = "Tommy";
    dog.breed = "Pug";
    dog.color = "Browm";
    dog.age = 9;

    dog.getAge();
    dog.getBreed();
    dog.getPetName();
    dog.getColor();
}