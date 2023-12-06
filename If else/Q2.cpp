//Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main(){

    int r; float c, a;

    cout<<"Enter Radius";
    cin>>r;

    c = 2 * 3.1459 * r;
    a = 3.1459 * r *r;

    if(c > a) cout<< "Circumference is larger then the area";
    else cout<< "Area is larger then the Circumference";

    return 0;
}