#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {0,2,3,4,5,6,7,8,9};
    int n = vec.size(); // Size of the array

    int target = 5;
    int hi = n - 1;
    int low = 0;
    int mid = low + (hi - low) / 2;

    while (low <= hi)
    {

        if(vec[mid] == target)
        {
            
        }
    }
}