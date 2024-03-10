#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int my_upper_bound;
int my_lower_bound;

int search(vector<int> &vec, int x)
{
    int n = vec.size(); // Size of the array
    int hi = n - 1;
    int low = 0;
    int mid = (hi + low) / 2;
    int flag = 0;

    while (low <= hi)
    {
        mid = low + (hi - low) / 2;
        if (vec[mid] < x)
            low = mid + 1;
        else if (vec[mid] > x)
            hi = mid - 1;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        my_upper_bound = low;
        my_lower_bound = hi;
        return -1;
    }
    return mid;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    int x = 6, k = 3;
    int low;
    int high;
    int mid = search(arr, x);
    vector<int> vec;

    if (mid == -1)
    {
        low = my_lower_bound;
        high = my_upper_bound;
    }

    else
    {
        low = mid - 1;
        high = mid + 1;
        vec.push_back(x);
    }

    while (vec.size() <= k - 1)
    {
        if (low < 0)
        {
            vec.push_back(arr[high]);
            high++;
        }
        else if (high > arr.size() - 1)
        {
            vec.push_back(arr[low]);
            low--;
        }

        else
        {
            if (x - arr[low] <= arr[high] - x)
            {
                vec.push_back(arr[low]);
                low--;
            }
            else
            {
                vec.push_back(arr[high]);
                high++;
            }
        }
    }

        for (int ele : vec)
        cout << ele << " ";
}
