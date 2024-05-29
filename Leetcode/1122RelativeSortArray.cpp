#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr1 = {28,6,22,8,44,17};
    vector<int> arr2 = {22,28,8,6};

    vector<int> res;
    vector<int> remaining;
    
    // Gather elements in arr1 that are present in arr2 in the order of arr2
    for(int i = 0; i < arr2.size(); i++) {
        for(int j = 0; j < arr1.size(); j++) {
            if(arr1[j] == arr2[i]) {
                res.push_back(arr1[j]);
            }
        }
    }

    // Gather elements in arr1 that are not in arr2
    for(int j = 0; j < arr1.size(); j++) {
        if(find(arr2.begin(), arr2.end(), arr1[j]) == arr2.end()) {
            remaining.push_back(arr1[j]);
        }
    }

    // Sort the remaining elements
    sort(remaining.begin(), remaining.end());

    // Combine both results
    res.insert(res.end(), remaining.begin(), remaining.end());

    // Print the result
    for(int ele : res) {
        cout << ele << " ";
    }

    return 0;
}
