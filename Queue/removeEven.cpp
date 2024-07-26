#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void displayQueue(queue<int> temp) {
    while (temp.size() > 0) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

void evenQueue(queue<int> &temp) {
    queue<int> stemp;
    int i = 0;
    while (!temp.empty()) {
        if (i % 2 == 0) {
            stemp.push(temp.front());
        }
        temp.pop();
        i++;
    }
    temp = stemp;
}

int main() {
    queue<int> temp;
    temp.push(10);
    temp.push(20);
    temp.push(30);
    temp.push(40);
    temp.push(50);
    displayQueue(temp);
    evenQueue(temp);
    displayQueue(temp);
}