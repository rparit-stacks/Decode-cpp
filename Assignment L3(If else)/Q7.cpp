//Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 
#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter two coordinates X and Y: ";
    cin>>x>>y;
    if(x==0 && y!=0) cout<<" Lies on Y axis ";
    else if(x==0 && y==0)cout<<"Lies On origin";
    else if(x!=0 && y==0) cout<<"lies on X axis";
    else cout<<" lies on plane";
    return 0;
}

