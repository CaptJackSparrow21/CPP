//https://takeuforward.org/binary-tree/binary-tree-representation-in-c?utm=codolio

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Node {
public:
    int data;
    Node *left, *right;

    Node(int key) {
        data = key;
        left = right = nullptr;
    }
};

class Solution {
public:
    Node *createBinaryTree() {
        Node *root = new Node(1);
        root->left = new Node(2);
        root->right = new Node (3);
        root->left->right = new Node(5);
        return root;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    Node *root = sol.createBinaryTree();  

    return 0;
}