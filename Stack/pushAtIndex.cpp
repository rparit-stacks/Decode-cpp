#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

void print(stack<int> nums) {
    while (nums.size() > 0) {
        cout << nums.top() << " ";
        nums.pop();
    }
    cout << endl;
}
void printRec(stack<int>& nums) {
    if (nums.size() == 0)
        return;
    int x = nums.top();
    nums.pop();
    printRec(nums);
    cout << x << " ";
    nums.push(x);
}
void pushArBottomRev(int value, stack<int>& nums) {
    if (nums.size() == 0) {
        nums.push(value);
        return;
    }
    int x = nums.top();
    nums.pop();
    pushArBottomRev(value, nums);
    nums.push(x);
}

void pushAtIndex(int value, int index, stack<int>& st) {
    stack<int> st1;
    for (int i = 0; i < index && !st.empty(); i++) {
        st1.push(st.top());
        st.pop();
    }
    st1.push(value);
    while (st.size() > 0) {
        st1.push(st.top());
        st.pop();
    }
    while (st1.size() > 0) {
        st.push(st1.top());
        st1.pop();
    }
}
int main() {
    stack<int> st;
    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);
    st.push(500);
    st.push(600);

    pushArBottomRev(10000, st);
    print(st);

    return 0;
}