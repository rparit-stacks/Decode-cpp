//Ques : Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
#include<iostream>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter Point one (x,y): ";
    cin>>x1>>y1;
    cout<<"Enter Point two (x,y): ";
    cin>>x2>>y2;
    cout<<"Enter Point three (x,y): ";
    cin>>x3>>y3;
    
    float m1 = (y2 - y1)/(x2 - x1);
    float m2 = (y3 - y2)/(x3 - x2);

    if(m1==m2) cout<<"all the three points fall on one straight line";
    else cout<<"The given set of 3 points do not fall on one straight line";

    return 0;
}

