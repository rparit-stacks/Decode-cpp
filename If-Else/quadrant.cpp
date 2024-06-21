#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter Coordinate X and Y : ";
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"Given Coordinates lies in 1st Quadrant ";
    }
    else if(x>0 && y<0)
    {
        cout<<"Given Coordinates lies in 4th Quadrant ";
    }
    else if(x<0 && y>0)
    {
        cout<<"Given Coordinates lies in 2nd Quadrant ";
    }
    else
    cout<<"Given Coordinates lies in 3rd Quadrant ";
    return 0;

}