#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int prio(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}

int solve(int val1, int val2, char ch) {
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}

int main() {
    string s = "2+6*4/8-3";
    stack<int> nums;
    stack<char> op;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i]))
            nums.push(s[i] - '0');
        else {
            if (op.size() == 0 || prio(s[i]) > prio(op.top()))
                op.push(s[i]);
            else {
                while (op.size() > 0 && prio(s[i]) <= prio(op.top())) {
                    char ch = op.top();
                    op.pop();
                    int val2 = nums.top();
                    nums.pop();
                    int val1 = nums.top();
                    nums.pop();
                    int ans = solve(val1, val2, ch);
                    nums.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    while (!op.empty()) {
        char ch = op.top();
        op.pop();
        int val2 = nums.top();
        nums.pop();
        int val1 = nums.top();
        nums.pop();

        int ans = solve(val1, val2, ch);
        nums.push(ans);
    }

    cout << nums.top();
    cout << endl << 2 + 6 * 4 / 8 - 3;

    return 0;
}