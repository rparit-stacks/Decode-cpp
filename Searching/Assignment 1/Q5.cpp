#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> arr = {0, 10, 5, 2};

    int n = arr.size();

    int low = 1;
    int high = n - 2;
    int mid = (high + low) / 2;

    while (low <= high)
    {
        if (arr[mid] > arr[mid - 1])
        {
            if (arr[mid] > arr[mid + 1])
            {
                cout << arr[mid];
                break;
            }
            else
                low = mid + 1;
        }

        else
            high = mid - 1;
    }
}