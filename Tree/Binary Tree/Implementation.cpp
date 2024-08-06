#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int* sum = new int(0);
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

int treeSum(Node* root) {
    if (root == NULL) {
        return *sum;
    }
    *sum += root->val;
    treeSum(root->left);
    treeSum(root->right);
}
void display(Node* root) {
    if (root == NULL)
        return;
    cout << root->val;
    display(root->left);
    display(root->right);
}

int sumOfTree(Node* root) {
    if (root == NULL)
        return 0;
    return root->val + sumOfTree(root->left) + sumOfTree(root->right);
}

int productOfTree(Node* root) {
    if (root == NULL)
        return 1;
    return root->val * productOfTree(root->left) * productOfTree(root->right);
}

int Size(Node* root) {
    if (root == NULL)
        return 0;
    return 1 + Size(root->left) + Size(root->right);
}

int maxIntree(Node* root) {
    if (root == NULL)
        return INT_MIN;
    int lMax = maxIntree(root->left);
    int rMax = maxIntree(root->right);
    return max(root->val, max(lMax, rMax));
}
int minIntree(Node* root) {
    if (root == NULL)
        return INT_MAX;
    int lMax = minIntree(root->left);
    int rMax = minIntree(root->right);
    return min(root->val, min(lMax, rMax));
}

int level(Node* root) {
    if (root == NULL)
        return 0;
    return 1 + max(level(root->left), level(root->right));
}

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;

    display(a);

    cout << endl << treeSum(a);
    cout << endl << Size(a);
    cout << endl << maxIntree(a);
    cout << endl << minIntree(a);
    cout << endl << productOfTree(a);
    cout << endl << level(a);

    return 0;
}