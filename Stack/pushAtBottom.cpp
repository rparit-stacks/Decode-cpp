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

void pushAtBottom(int n, stack<int>& st) {
    stack<int> st1;
    while (st.size() > 0) {
        st1.push(st.top());
        st.pop();
    }
    st1.push(n);
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
    print(st);
    pushAtBottom(10, st);
    print(st);

    return 0;
}