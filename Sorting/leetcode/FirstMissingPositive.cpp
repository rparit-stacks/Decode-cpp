#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
void display(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int maximumElement(vector<int> &vec)
{
    int max = INT_MIN;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > max)
            max = vec[i];
    }
    return max;
}

void removeUnwanted(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] <= 0)
            vec.erase(vec.begin() + i);
    }
}

int main()
{
    vector<int> nums = {1, 2, 2, 2, 2, 3, 1};
    removeUnwanted(nums);
    sort(nums.begin(), nums.end());
    int a = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == a)
        {
            a++;
        }
        else{
    
            break;
        }
    }

    cout<<a;

    // for (int ele : nums)
    // {
    //     cout << ele << " ";
    // }
}