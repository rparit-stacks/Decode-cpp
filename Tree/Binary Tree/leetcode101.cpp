#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Node {
public:
    Node* left;
    Node* right;
    int val;
    int size;

    Node(int val) : val(val), right(NULL), left(NULL) {
        size = 0;
    }
};
void helper(Node* root) {
    if (root == NULL)
        return;
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    helper(root->left);
    helper(root->right);
}
bool isSameTree(Node* p, Node* q) {
    if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;

    if (p->val != q->val)
        return false;

    bool leftTree = isSameTree(p->left, q->left);
    if (leftTree == false)
        return false;

    bool rightTree = isSameTree(p->right, q->right);
    if (rightTree == false)
        return false;

    return true;
}

bool isSymmetric(Node* root) {
    helper(root->right);
    return isSameTree(root->right, root->left);
}

int main() {
    return 0;
}