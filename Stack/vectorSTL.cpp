#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Stack {
public:
    vector<int> Stac;

    void push(int n) {
        Stac.push_back(n);
    }

    int top() {
        if (Stac.size() == 0) {
            cout << "UnderFlow";
            return -1;
        }
        return Stac[Stac.size() - 1];
    }

    void pop() {
        if (Stac.size() == 0) {
            cout << "UnderFlow";
            return -1;
        }
        Stac.pop_back();
    }

    void display() {
        if (Stac.size() == 0) {
            cout << "UnderFlow";
            return -1;
        }
        for (int i = Stac.size() - 1; i >= 0; i--) {
            cout << Stac[i] << " ";
        }
        cout << endl;
    }
    int size() {
        return Stac.size();
    }

    bool empty() {
        if (Stac.size() == 0) {
            return true;
        }
        return false;
    }
};

int main() {
    Stack rohit;
    rohit.push(00);
    rohit.push(100);
    rohit.push(100);
    rohit.push(100);
    rohit.push(100);
    rohit.push(0);

    rohit.display();
    return 0;
}