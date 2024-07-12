#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    string breed;
    int age;
    string color;
    string petName;

    void displayDetails();

    Dog() {
        cout << "Dog object created" << endl;
    }

    ~Dog() {
        cout << this->petName << " Is deleted" << endl;
    }
};

void Dog ::displayDetails() {
    cout << "Dog's Pet Name: " << petName << endl
         << "Breed: " << breed << endl
         << "Age: " << age << endl
         << "Color: " << color << "\n\n";
}

int main() {
    Dog dog1;
    dog1.breed = "Dalmatian";
    dog1.age = 7;
    dog1.color = "White-black";
    dog1.petName = "Jackie";

    Dog dog2;
    dog2.breed = "Beagle";
    dog2.age = 4;
    dog2.color = "Brown";
    dog2.petName = "Pluto";

    return 0;
}