#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    ListNode* middleNode(ListNode * head) {
        ListNode* temp = head;
        int n = 0;
        while (temp != NULL) {
            n++;
            temp = temp->next;
        }
        temp = head;
        for (int i = 1; i <= (n / 2); i++) {
            temp = temp->next;
        }
        head = temp;
        return head;
    }

    return 0;
}