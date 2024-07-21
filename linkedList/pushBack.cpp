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

    Node(int value) : val(value), next(NULL) {
    }

    void pushBack(int n);
};

class List {
public:
    Node* head;
    Node* tail;
    int size;

    List() {
        head = tail = NULL;
        size = 0;
    }

    int atIndex(int n);
    void deleteAt(int n);
    void pushBack(int n);
    void display();
    void pushAt(int n, int val);
    void setValeAt(int n, int val);
    void deleteNode(Node* node);
};

int List::atIndex(int n) {
    if (n < 1 || n > size) {
        cout << "Index out of bounds." << endl;
        return -1;
    }

    if (head == nullptr) {
        cout << "List is empty." << endl;
        return -1;
    }

    Node* temp = head;
    for (int i = 1; i < n; i++) {
        temp = temp->next;
    }

    return temp->val;
}

void List::deleteAt(int n) {
    if (n < 1 || n > size) {
        cout << "Index out of bounds." << endl;
        return;
    }

    Node* temp = head;
    if (n == 1) {
        head = head->next;
        delete temp;
    } else {
        Node* prev = nullptr;
        for (int i = 1; i < n; i++) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        if (temp == tail) {
            tail = prev;
        }
        delete temp;
    }
    size--;
}

void List::pushBack(int n) {
    Node* temp = new Node(n);
    if (head == nullptr)
        head = tail = temp;
    else {
        tail->next = temp;
        tail = temp;
    }
    size++;
}

void List::display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void List::pushAt(int n, int val) {
    if (n < 1 || n > size + 1) {
        cout << "Index out of bounds." << endl;
        return;
    }

    Node* newNode = new Node(val);
    if (n == 1) {
        newNode->next = head;
        head = newNode;
        if (tail == nullptr) {
            tail = head;
        }
    } else {
        Node* temp = head;
        for (int i = 1; i < n - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        if (newNode->next == nullptr) {
            tail = newNode;
        }
    }
    size++;
}

void List::setValeAt(int n, int val) {
    if (n < 1 || n > size) {
        cout << "Index out of bounds." << endl;
        return;
    }
    if (n == 1) {
        head->val = val;
        return;
    } else {
        Node* Temp = head;
        for (int i = 1; i < n; i++) {
            Temp = Temp->next;
        }

        Temp->val = val;
    }
}

void List::deleteNode(Node* node) {
    Node* temp = node->next;
    node->val = temp->val;
    node->next = temp->next;
}

int main() {
    List stud;
    stud.pushBack(1);
    stud.pushBack(2);
    stud.pushBack(3);
    stud.pushBack(4);
    stud.pushBack(5);
    stud.pushBack(6);
    stud.display();

    stud.setValeAt(3, 100);
    stud.display();

    return 0;
}