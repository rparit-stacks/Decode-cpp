#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) : val(val), next(NULL) {
    }
};
int main() {
    stack<int> nums;
    nums.push(10);
    nums.push(20);
    nums.push(30);
    nums.push(40);
    nums.push(50);
    Node* temp = new Node(10);
    Node* prev = temp;

    while (nums.size() > 0) {
        Node* next = new Node(nums.top());
        cout << nums.top() << " ";
        prev->next = next;
        prev = next;
        nums.pop();
    }

    Node* temp1 = temp;
    while (temp1->next != NULL) {
        nums.push(temp1->next->val);
        temp1->next = temp->next->next;
    }
    cout << endl;
    while (nums.size() > 0) {
        cout << nums.top() << " ";
        nums.pop();
    }

    return 0;
}