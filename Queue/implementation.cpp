#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void displayQueue(queue<int> temp)
{
    while (temp.size() > 0)
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

void reverseQueue(queue<int> &temp)
{
    stack<int> stemp;
    while (!temp.empty())
    {
        stemp.push(temp.front());
        temp.pop();
    }
    while (!stemp.empty())
    {
        temp.push(stemp.top());
        stemp.pop();
    }
}

int main()
{

    queue<int> temp;
    temp.push(10);
    temp.push(20);
    temp.push(30);
    temp.push(40);
    temp.push(50);

    displayQueue(temp);
    reverseQueue(temp);
    displayQueue(temp);
}