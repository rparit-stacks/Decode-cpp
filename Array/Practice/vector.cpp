#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()

{
    vector<string>Student;
    string name;
    cout<<"Enter Your Name : ";
    cin>>name;

    string roll;
    cout<<"Enter Your Roll no. : ";
    cin>>roll;

    string Collage;
    cout<<"Enter Your collage Name : ";
    cin>>Collage;

    string sem;
    cout<<"Enter Your sem : ";
    cin>>sem;

    Student.push_back(name);
    Student.push_back(roll);
    Student.push_back(Collage);
    Student.push_back(sem);

    cout<<Student.at(0);


    

}
