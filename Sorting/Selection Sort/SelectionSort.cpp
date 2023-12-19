#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[7] = {3,4,5,2,2,1,6};
    int n = 7;
    
    
    for (int j = 0; j < n-1; j++)
    {
        int max = INT_MAX;
        int minx = -1;
        for (int i = j; i < n; i++)
        {
            if (arr[i]<max)
            {
                max = arr[i];
                minx = i;
            }
                
        }
        swap(arr[j],arr[minx]);
    }


    for (int i : arr)
        {
            cout<<i;
        }
    
}