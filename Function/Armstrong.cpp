#include <iostream>
#include <cmath>
using namespace std;

int countDigit(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrongNumber(int num)
{
    int digit = countDigit(num);
    int b = num, result = 0;

    while (b > 0)
    {
        int temp = b % 10;
        result += pow(temp, digit);
        b /= 10;
    }

    return (result == num);
}

int main()
{
    for (int i = 100; i < 100000; i++)
    {
        if (isArmstrongNumber(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}
