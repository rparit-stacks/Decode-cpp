#include <iostream>
#include <string>
using namespace std;

class person {  // this is parent classs
public:
    int age;
    string fullName;
    int phoneNumber;
};

class Student : public person {  // this is base class
public:
    int studentId;
    string schoolName;

    void study() {
        cout << "Studying" << endl;
    }
};

class Employee : public person {  // this is also a base class
public:
    int employeeId;
    string companyName;

    void work() {
        cout << "Working" << endl;
    }
};

int main() {
    Employee emp1;
    Student std1;

    emp1.fullName = "Rohit parit";
    emp1.age = 21;
    emp1.employeeId = 85474578;

    std1.fullName = "Nitin Mittal";
    std1.age = 20;
    std1.studentId = 74858578;

    cout << std1.fullName;

    return 0;
}