#include <iostream>
#include <vector>
using namespace std;

int main()
{

    long long target = 96;
    int hi = target;
    int low = 0;
    long long mid;
    bool flag = false;

    while (low <= hi)
    {
        mid = low + (hi - low) / 2;

        if (mid * mid == target)
        {
            cout << mid;
            flag = true;
            break;
        }

        else if (mid * mid > target)
            hi = mid - 1;

        else
            low = mid + 1;
    }

    if (flag == false)
        cout << 0;
}