//Q1 : Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int a[5][5] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}