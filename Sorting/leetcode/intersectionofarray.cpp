#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

void removeDuplicate(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] == vec[j])
            {
                vec.erase(vec.begin() + j);
            }
        }
    }
}
int main()
{
    vector<int> arr = {4, 9, 5};
    removeDuplicate(arr);
    vector<int> arr2 = {9, 4, 9, 8, 4};
    removeDuplicate(arr2);

    vector<int> res;

    

    for (int j = 0; j < arr.size(); j++)
    {
        for (int i = 0; i < arr2.size(); i++)
        {
            if (arr[j] == arr2[i])
            {
                res.push_back(arr[j]);
            }
        }
    }
    removeDuplicate(res);
    for (int ele : res)
    {
        cout << ele << " ";
    }
}
