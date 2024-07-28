#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;

template <class T>
class Queue {
private:
    vector<T> values;

public:
    void pop() {
        values.erase(values.begin());
    }

    T front() {
        if (values.size() == 0) {
            cout << "Queue is Empty";
            return -1;
        } else {
            return values[0];
        }
    }
    T back() {
        if (values.size() == 0) {
            cout << "Queue is Empty";
            return -1;
        } else {
            return values[values.size() - 1];
        }
    }

    void push(int val) {
        values.push_back(val);
    }

    bool isEmpty() {
        if (values.size() == 0)
            return true;
        else
            return false;
    }

    void display() {
        for (int i = 0; i < values.size(); i++) {
            cout << values[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue<int> abc;
    abc.push(100);
    abc.push(200);
    abc.push(300);
    abc.push(400);
    abc.push(500);
    abc.push(600);
    abc.display();

    abc.display();

    return 0;
}