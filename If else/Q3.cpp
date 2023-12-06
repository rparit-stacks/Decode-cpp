//Ques : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)

#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the Year: "; cin>>year;

    if(year >= 3000)
        {
            if(year%400 == 0) cout<<year<<" Is a leap year";
            else cout<<year<<" Is not a leap year";
        }
        else 
        {
            if(year%4 == 0) cout<<year<<" Is a leap year";
            else cout<<year<<" Is not a leap year";
        }
    return 0;
}