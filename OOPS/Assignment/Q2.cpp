// Q2. Create a class to specify data on students with these attributes: Roll
// number, Name, Department, Course, Year of joining .Create 2 class
// variables.Now, create a member function to check if two students have the
// same Department.

#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    string department;
    string course;
    int yearOfjoining;

public:
    static int totalStudents, noOfClass;
    Student(int rollNumber, string name, string department, string course,
            int yearOfjoining)
        : rollNumber(rollNumber),
          name(name),
          department(department),
          course(course),
          yearOfjoining(yearOfjoining) {
    }

    // Student operator=(Student& obj) {
    //     if (this->department == obj.department)
    //         cout << this->name << " and " << obj.name
    //              << " have same department " << this->department << endl;
    //     else
    //         cout << this->name << " and " << obj.name
    //              << " don't have same department " << endl;
    // }

    void checkDepartment(const Student& obj) const {
        if (this->department == obj.department)
            cout << this->name << " and " << obj.name
                 << " have the same department: " << this->department << endl;
        else
            cout << this->name << " and " << obj.name
                 << " don't have the same department" << endl;
    }
};

int Student::totalStudents = 100;
int Student::noOfClass = 10;

int main() {
    Student std1(1370, "Rohit", "IT", "BCA", 2022),
        std2(602, "samyak", "IT", "BCA", 2022);

    std1.checkDepartment(std2);

    cout << "Total Number of students as per one class is : "
         << Student::totalStudents / Student::noOfClass;
    return 0;
}