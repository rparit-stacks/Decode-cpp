#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> vec = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = vec.size(); // Size of the array

    int target = 1;
    
    bool flag = false;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int hi = n - 1;
        int low = i;
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
                    cout << "total Element of 1's are " << n - mid << endl;
                    flag = true;
                    break;
                }
            }
            else if (vec[mid] > target)
                hi = mid - 1;
            else
                low = mid + 1;
        }
    }

    if (flag == false)
        cout << -1;
}