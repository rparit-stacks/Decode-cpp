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

void reverseStack(stack<int>& st) {
    stack<int> temp;

    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }
    st = temp;
}
int main() {
    stack<int> st;
    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);
    st.push(500);
    st.push(600);

    print(st);
    reverseStack(st);
    print(st);

    return 0;
}