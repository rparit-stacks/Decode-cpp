#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {
    }
};
void deleteNode(ListNode* node) {
    ListNode* temp = node->next;
    node->val = temp->val;
    node->next = temp->next;
}
void display(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* middleNode(ListNode* head) {
    ListNode* temp = head;
    int n = 0;
    while (temp != NULL) {
        n++;
        temp = temp->next;
    }
    temp = head;
    for (int i = 1; i <= (n / 2); i++) {
        temp = temp->next;
    }
    head = temp;
    return head;
}

int main() {
    ListNode* e = new ListNode(10);
    ListNode* a = new ListNode(20);
    ListNode* b = new ListNode(30);
    // ListNode* c = new ListNode(40);
    // ListNode* d = new ListNode(50);
    // ListNode* f = new ListNode(60);

    e->next = a;
    a->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = f;
    display(e);

    display(middleNode(e));

    return 0;
}