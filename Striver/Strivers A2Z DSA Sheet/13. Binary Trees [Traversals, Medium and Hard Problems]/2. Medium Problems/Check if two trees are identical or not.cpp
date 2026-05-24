//https://takeuforward.org/plus/dsa/problems/check-if-two-trees-are-identical-or-not?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {}
};

class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if(p == nullptr && q == NULL)
            return true;

        if(p == NULL || q == nullptr)
            return false;

        if(p->data != q->data)
            return false;

        return isSameTree(p->left, q->left) && 
               isSameTree(p->right, q->right);
    }
};

TreeNode *buildTree(vector<string> &arr) {
    if(arr.size() == 0 || arr[0] == "null")
        return 0;

    TreeNode *root = new TreeNode(stoi(arr[0]));
    queue<TreeNode *> q;
    q.push(root);

    int i=1;
    while(!q.empty() && i < arr.size()) {
        TreeNode *curr = q.front();
        q.pop();

        if(i < arr.size() && arr[i] != "null") {
            curr->left = new TreeNode(stoi(arr[i]));
            q.push(curr->left);
        }
        i++;

        if(i < arr.size() && arr[i] != "null") {
            curr->right = new TreeNode(stoi(arr[i]));
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    vector<string> arr1, arr2;
    string temp = "";

    for(char c : s1) {
        if(c == '[' || c == ']')
            continue;

        if(c == ',') {
            arr1.push_back(temp);
            temp = "";
        }
        else 
            temp += c;
    }
    arr1.push_back(temp);

    temp = "";
    for(char c : s2) {
        if(c == '[' || c == ']') 
            continue;

        if(c == ',') {
            arr2.push_back(temp);
            temp = "";
        }
        else 
            temp += c;
    }
    arr2.push_back(temp);

    TreeNode *p = buildTree(arr1);
    TreeNode *q = buildTree(arr2);

    Solution sol;
    cout << boolalpha << sol.isSameTree(p, q);


    return 0;
}