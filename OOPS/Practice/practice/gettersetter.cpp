#include <iostream>
using namespace std;

class students
{
private:
    string name;
    int age;
    int roll;

public:
    void set_age_to(int age)
    {
        this->age = age;
    }
    void set_name_to(string name)
    {
        this->name = name;
    }
    void set_roll_to(int roll)
    {
        this->roll = roll;
    }

    int get_age()
    {
        return age;
    }
    int get_roll_number()
    {
        return roll;
    }
    string get_name()
    {
        return name;
    }
};

int main()
{
    students A;

    A.set_name_to("Rohit Parit");
    cout << "Name of the student : " << A.get_name() << endl;
    A.set_age_to(19);
    cout << "Age of the student  : " << A.get_age() << endl;
    A.set_roll_to(23);
    cout << "Roll number of the student : " << A.get_roll_number() << endl;
    

}
