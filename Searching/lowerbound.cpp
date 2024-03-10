#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = arr.size();
    int target = 14;
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low) / 2;
    int flag = false;

    while (low <= high)
    {
        mid = low + (high - low / 2);
        if (arr[mid] == target)
        {
            cout << arr[mid - 1];
            flag = true;
            break;
        }

        else if (arr[mid] > target)
            high = mid - 1;

        else if (arr[mid] < target)
            low = mid + 1;
    }
    if (flag == false)
    {
        cout << arr[high] << endl;
        cout << arr[low] << endl;
    }
}