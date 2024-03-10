#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0, num = 0;
    bool flag = true;

    string str = "-91283472332";

    // main function
    for (int i = 0; i < str.length(); i++)
    {
        if ((int)str[0] >= 58 || (int)str[0] <= 47 && (int)str[0] != 32)
            break;

        if ((int)str[i] < 58 && (int)str[i] > 47)
        {
            num = sum + (int)str[i] - 48;
            sum = num * 10;
        }
        else if ((int)str[i] == 46)
            break;
        else if ((int)str[i] == 45)
            flag = false;
    }
    // printing
    if (num <= 2147483648 && num >= 0)
    {
        if (flag == false)
            cout << num * -1;
        else
            cout << num;
    }

    else
    {
        if (flag == false)
            cout << 2147483648 * -1;
        else
            cout << 2147483648;
    }
}