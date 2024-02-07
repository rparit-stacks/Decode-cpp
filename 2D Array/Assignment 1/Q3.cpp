// Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from(l1, r1) to(l2, r2).
#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
    using namespace std;

int main()
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};

    int l1 = 1, l2 = 1, r1 = 2, r2 = 2;
    int sum = 0;

    for (int i = l1; i <= r1; i++)   
    {
        for (int j = l1; j <= r2; j++)
        {
            sum += a[i][j];
        }
    }
    cout<<sum;
}