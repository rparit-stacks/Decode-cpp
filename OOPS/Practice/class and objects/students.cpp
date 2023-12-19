//Define a class named Student with attributes such as name, rollNumber, and marks. Create two instances of the Student class and display their information.



#include<iostream>
#include<string>

using namespace std;

class students
{
    public:
        string name;
        int rollNumber;
        int marks;
    
    void display(students name)
    {
        cout<<"name of student is : ";
    }
};
int main()
{
    students Rohit;
    Rohit.name = "Rohit Kumar";
    Rohit.rollNumber=17;
    Rohit.marks = 85;
    


}