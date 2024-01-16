#include<iostream>
using namespace std;

class sum{
    public:
        int psum(int a, int b){
            return a+b;
        }

};

int main()
{
    int a = 1;
    int b = 10;

    sum add;
    cout << "Sum of "<<a<<" and "<<b<<" is : "<<add.psum(a,b);
}