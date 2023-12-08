//WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;   
int main() {
    int r,h; // r is radius and h is height
    cout<<"Enter Radius and height : ";
    cin>>r>>h;
    float Vol = 3.141592 * r * r * h;

    cout<<"The volume of cylinder is : "<<Vol;

    return 0;
}