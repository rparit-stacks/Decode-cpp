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

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void displayReverse() {
        Node* temp = tail;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
    void displayMiddle(Node* temp) {
        Node* middle = temp;
        while (middle->prev) {
            middle = middle->prev;
        }
        while (middle) {
            cout << middle->val << " ";
            middle = middle->next;
        }
    }
    void push_back(int val) {
        Node* temp = new Node(val);
        if (!head && !tail) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void push_start(int val) {
        Node* temp = new Node(val);
        if (!head && !tail) {
            head = temp;
            tail = temp;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void deleteAt(int idx) {
        if (idx < 1 || idx > size) {
            cout << "Invalid index: " << idx << endl;
            return;
        }

        Node* temp = head;

        if (idx == 1) {
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            } else {
                tail = NULL;
            }
            delete temp;
        }

        else if (idx == size) {
            temp = tail;
            tail = tail->prev;
            if (tail != NULL) {
                tail->next = NULL;
            } else {
                head = NULL;
            }
            delete temp;
        }

        else {
            temp = head;
            for (int i = 1; i < idx; ++i) {
                temp = temp->next;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }

        size--;
    }
    void deleteHead() {
        Node* temp = head;

        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
        delete temp;
        size--;
    }
    void deleteTail() {
        tail = tail->prev;
        if (tail != NULL) {
            tail->next = NULL;
        } else {
            head = NULL;
        }
        size--;
    }
    void insertAt(int idx, int value) {
        if (idx < 1 || idx > size + 1) {
            cout << "Invalid index: " << idx << endl;
            return;
        }

        Node* temp = new Node(value);

        if (idx == 1) {
            temp->next = head;
            if (head) {
                head->prev = temp;
            }
            head = temp;
            if (size == 0) {
                tail = temp;
            }
        } else if (idx == size + 1) {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        } else {
            Node* current = head;
            for (int i = 1; i < idx - 1; i++) {
                current = current->next;
            }
            temp->next = current->next;
            temp->prev = current;
            if (current->next) {
                current->next->prev = temp;
            }
            current->next = temp;
        }
        size++;
    }
    void get(int idx) {
        if (idx < 1 || idx > size + 1) {
            cout << "Invalid index: " << idx << endl;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < idx; i++)
            temp = temp->next;
        cout << temp->val << endl;
    }
};

int main() {
    List rohit;
    rohit.push_back(1);
    rohit.push_back(2);
    rohit.push_back(3);
    rohit.push_back(4);
    rohit.push_back(5);
    rohit.push_back(6);

    rohit.get(3);

    return 0;
}