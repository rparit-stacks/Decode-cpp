#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
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
    Node a(10), b(20), c(30), d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout << a.val << endl;
    // cout << (((a.next)->next)->next)->val << endl;

    Node temp = a;
    while (true) {
        cout << temp.val << " ";
        if (temp.next == NULL)
            break;
        temp = *(temp.next);
    }

    return 0;
}