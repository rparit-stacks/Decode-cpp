#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 2, 3, 1};
    int count;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] > nums[j] * 2)
            {
                cout << "[" << nums[i] << "," << nums[j] << "]" << endl;
            }
            count++;
        }
    }
}