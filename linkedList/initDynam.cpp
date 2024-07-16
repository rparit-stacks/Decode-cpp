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
    Node* a = new Node(10);
    Node* b = new Node(60);
    Node* c = new Node(50);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    Node* temp = a;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}