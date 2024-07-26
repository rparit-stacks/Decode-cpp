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

class Stack {
public:
    Node* head;
    int size;

    Stack() {
        head = NULL;
        size = 0;
    }

    void push(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop() {
        if (head != NULL) {
            head = head->next;
        } else {
            cout << "Underflow";
        }
        size--;
    }
    bool isEmpty() {
        return head == NULL;
    }
    int top() {
        if (head != NULL)
            return head->val;
        else
            cout << "UnderFlow";
        return -1;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack Rohit;
    Rohit.push(100);
    Rohit.display();
    cout << "Top element: " << Rohit.top() << endl;
    Rohit.pop();
    Rohit.display();
    return 0;
}