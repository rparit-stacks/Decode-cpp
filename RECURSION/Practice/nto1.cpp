#include <iostream>
using namespace std;

void reverseprint(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    reverseprint(n - 1);
}

int main()
{
    reverseprint(10);
}
