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

int display_size(bool print, Node* temp) {
    int* n = new int(0);
    while (temp != NULL) {
        if (print == true)
            cout << temp->val << " ";
        (*n)++;
        temp = temp->next;
    }
    return *n;
    cout << endl;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(60);
    Node* c = new Node(50);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    cout << display_size(false, a);

    return 0;
}