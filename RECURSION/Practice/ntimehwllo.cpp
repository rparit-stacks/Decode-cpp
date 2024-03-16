#include <iostream>
using namespace std;

void factorial(int num)
{
    if (num == 0)
        return;
    else
    {
        cout << "Hello world ! " << endl;
        factorial(num - 1);
    }
}

int main()
{
    int num = 5;

    factorial(num);
}