#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 3, 5, 6};
    int n = vec.size(); // Size of the array

    int target = 2;
    int hi = n - 1;
    int low = 0;
    int mid = low + (hi - low) / 2;

    while (low <= hi)
    {
        mid = low + (hi - low) / 2;

        if (vec[mid] == target)
        {
            if (vec[mid - 1] == target)
                hi = mid - 1;
            else
            {
                cout << mid;
                break;
            }
        }

        else if (vec[mid] > target)
            hi = mid - 1;

        else if (vec[mid] < target)
            low = mid + 1;
    }

    cout<<low;
}