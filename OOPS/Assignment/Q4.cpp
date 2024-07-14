//  Q4. Create a class ‘Employee’ with following data members :
// NameÁ
// Employee IDÁ
// Salary

// Class should have following member functions:
// Ä DÅsplay() : To dÅsplay the characterÅstÅcs

// Create 5 objects of Employee and write functions to calculate
// averageWage() : To return the average salary of all employeesÁ
// maxSalary() : To return the employee whose salary Ås maxÅmum

#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int maxSal = INT_MIN;

class Employee {
public:
    string name;
    string employeeId;
    int salary;

    Employee() {};
    Employee(string name, string emId, int salary)
        : name(name), employeeId(emId), salary(salary) {
    }
    void Display(const Employee& empl) const {
        cout << this->name << endl;
        cout << this->salary << endl;
        cout << this->employeeId << endl;
    }

    static double averageWage(vector<Employee> employees) {
        double sum = 0;
        for (Employee emp : employees) {
            sum += (double)emp.salary;
        }
        return sum / 5;
    }

    static Employee maxSalary(vector<Employee> employees) {
        Employee obj;
        for (Employee emp : employees) {
            if (emp.salary > maxSal) {
                maxSal = emp.salary;
                obj = emp;
            }
        }
        return obj;
    }
};

int main() {
    Employee rohit("rohit", "375834", 100000);
    Employee smyk("Samyak", "358434", 58500);
    Employee Aniket("Aniket", "74834", 90000);
    Employee nitin("Nitin", "485834", 70000);
    Employee kunal("Kunal", "748834", 70000);

    vector<Employee> employees = {rohit, nitin, kunal, Aniket, smyk};
    cout << Employee ::averageWage(employees) << endl;
    cout << Employee ::maxSalary(employees).salary;

    return 0;
}
