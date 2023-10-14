//Ques : Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include<iostream>
using namespace std;

int main()
{
    char input;
    cout<<"Enter a character: ";
    cin>>input;

    if(input >= 'A' && input >='a') cout<<"the given character is a alphabet";
    else if(input > '0') cout<<"The givem charcter is a digit";
    else cout<<"The given character is a special charcter";

    return 0;

}

