#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {5, 9, 12, 14, 17, 20, 23, 24, 27, 29, 31, 33, 35, 38, 40, 43, 45, 48, 51, 53, 55, 58, 61, 64, 66, 68, 70, 73, 76, 78, 81, 84, 86, 89, 91, 94, 96, 98, 100, 102, 105, 108, 111, 113, 115, 118, 120, 123, 125, 128, 130, 133, 135, 137, 139, 141, 144, 146, 148, 151, 153, 155, 158, 161, 164, 167, 169, 171, 173, 176, 178, 180, 183, 185, 187, 189, 192, 194, 197, 200, 203, 205, 208, 211, 214, 217, 219, 222, 225, 227, 230, 232, 235, 238, 241, 243, 246, 249, 251, 254, 257, 259};
    int n = vec.size(); // Size of the array

    int target = 70;
    int hi = n - 1;
    int low = 0;
    int mid = (hi + low) / 2;
    int i = 0;

    while (i<vec.size())
    {
        if (vec[mid] < target)
        {
            low = mid +1;
            mid = (hi + low) / 2;
        }

        else if(vec[mid] > target)
        {
            hi = mid -1;
            mid = (hi + low) / 2;
        }

        else if(vec[mid] == target)
        {
            cout<<"true"<<" "<<mid<<" "<<i;
            break;
        }
        i++;
    }
   
}