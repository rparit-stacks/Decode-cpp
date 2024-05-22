#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "words and 987";
    int num;
    int sum = 0;
    int flag = false;
    for (int i = 0; i < str1.size(); i++)
    {
        if ((int)str1[i] == 45 && (int)str1[i + 1] <= 57 && (int)str1[i + 1] >= 48)
            flag = true;
        if ((int)str1[i] <= 57 && (int)str1[i] >= 48)
        {
            num = sum + (int)str1[i] - 48;
            sum = num * 10;
        }
        else
            continue;
    }
    if (flag)
    {
        cout << -1 * num;
    }
    else
        cout << num;
}