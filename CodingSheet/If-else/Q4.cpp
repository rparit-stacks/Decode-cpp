// // 4) Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots(both real and complex roots depending upon the discriminant).

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int x = (b * b) - (4 * a * c);

    if (x > 0)
    {
        int root1 = ((-b + sqrt(x)) / 2 * a);
        cout << "root 1 is : " << root1;
        int root2 = ((-b - sqrt(x)) / 2 * a);
        cout << "root 2 is : " << root2;
    }

    else if (x == 0)
    {
        int root1 = (-b) / (2 * a);
        cout << "root 1 is : " << root1;
    }

    else
    {
        cout << "No real roots";
    }
}