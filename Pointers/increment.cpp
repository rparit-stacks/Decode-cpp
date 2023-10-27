#include<iostream>
using namespace std;

int main()
{
   int x = 1;
   int* y = &x;
   y=y+11;
   cout<<"Value of x after incrementing y: " << *y << endl;

}