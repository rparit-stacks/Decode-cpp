#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {5, 1, 8, 2, 3};
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] > nums[j])
            {
                cout << "[" << nums[i] << "," << nums[j] << "]" << endl;
            }
            count++;
        }
    }
    cout << count;
}