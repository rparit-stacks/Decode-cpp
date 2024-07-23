#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int main() {
    stack<int> st;
    stack<int> st1;
    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);
    st.push(500);
    st.push(600);
    // Reverse print
    while (st.size() > 0) {
        cout << st.top() << endl;
        st1.push(st.top());
        st.pop();
    }
    cout << endl;
    st = st1;
    while (st.size() > 0) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}