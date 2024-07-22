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
    Node* prev;

    Node(int val) {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
    static void display(Node* temp);
    static void displayRev(Node* temp);
    static void displayMiddle(Node* temp);
};

void Node::display(Node* temp) {
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Node::displayRev(Node* temp) {
    while (temp) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void Node::displayMiddle(Node* temp) {
    Node* middle = temp;
    while (middle->prev) {
        middle = middle->prev;
    }
    while (middle) {
        cout << middle->val << " ";
        middle = middle->next;
    }
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    // Node::display(a);
    // Node::displayRev(a);
    Node::displayMiddle(c);

    return 0;
}