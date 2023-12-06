//Ques : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks. 
#include<iostream>
using namespace std;
int main()
{
    int A, B ,C;
    cout<<"Enter marks of three subjects: ";
    cin>>A >>B >> C ;

    if(A<B)
    {
        if(A<C) cout<<" student scoring least marks !st Subject ";
        else if(C<B) cout<<" student scoring least marks 3rd subject";
    }
    else if(B < C) cout<<" student scoring least marks in 2nd subject";
    else cout<<"student scoring least marks in 3rd subject ";

    return 0;

}
