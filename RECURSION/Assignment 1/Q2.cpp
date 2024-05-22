#include <iostream>
using namespace std;

// for 1 2 3
int stair_combi(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 4;

    return n + stair_combi(n - 2) + stair_combi(n - 3);
}

int main()
{
    cout << stair_combi(11);
}