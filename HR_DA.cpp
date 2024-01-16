#include <iostream>

using namespace std;

class Teacher
{
private:
    string name[20];
    string subject[10];
    float basic_salary, DA, HRA, salary;

    float calculate()
    {
        salary = basic_salary + HRA + DA;
        return salary;
    }

public:
    void readData(int basic_salary, int DA, int HRA)
    {
        this->basic_salary = basic_salary;
        this->DA = DA;
        this->HRA = HRA;
    }

    void display()
    {
        cout << "Gross salary is : " << calculate() << endl;
        cout << "HRA is " << HRA << endl;
        cout << "DA : " << DA << endl;
    }
};

int main()
{
    Teacher T;
    T.readData(80000, 5000, 10000);

    T.display();
}