//Create a C++ program that calculates the average of three test scores provided by the user using `cin`, and then display the average using `cout`.
#include <iostream>
using namespace std;

int main() {

    int x,y,z;

    cout<<"Enter three scores : ";
    cin>>x>>y>>z;

    cout<<"the avarage scores : "<<(x+y+z)/3;

    return 0;
}
