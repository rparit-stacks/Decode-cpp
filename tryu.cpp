#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin>>num;
    int arr[num];
    
    for(int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = size-1; i >= 0; i--)
    {
        cout<<arr[i];
    }
    
    return 0;
}
