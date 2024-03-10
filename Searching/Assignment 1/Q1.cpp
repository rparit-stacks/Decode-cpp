#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 3, 4, 4, 4, 5};
    int n = vec.size(); // Size of the array

    int target = 9;
    int hi = n - 1;
    int low = 0;
    int mid = low + (hi - low) / 2;
    bool flag = false;

    while (low <= hi)
    {
        mid = low + (hi - low) / 2;

        if (vec[mid] == target)
        {
            if (vec[mid + 1] == target)
                low = mid + 1;
            else
            {
                cout << "Element found at index: " << mid << endl;
                flag = true;
                break;
            }
        }
        else if (vec[mid] > target)
            hi = mid - 1;
        else
            low = mid + 1;
    }

    if(flag == false) cout<< -1;
}