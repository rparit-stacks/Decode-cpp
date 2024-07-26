#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {2, 1, 2, 4};
    int n = nums.size();

    vector<int> ans(n, -1);

    stack<int> temp;

    for (int i = 0; i < n; i++) {
        while (temp.size() > 0 && nums[i] >= nums[temp.top()]) {
            temp.pop();
        }

        if (temp.size() != 0) {
            ans[i] = temp.top();
        }

        temp.push(i);
    }

    vector<int> span(n);
    for (int i = 0; i < n; i++) {
        span[i] = (ans[i] == -1) ? (i + 1) : (i - ans[i]);
    }

    for (int ele : span)
        cout << ele << " ";

    return 0;
}