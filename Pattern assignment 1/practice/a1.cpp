#include <iostream>
using namespace std;

int main()
{
    int t = 5, num = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
        t--;
    }
}