//https://takeuforward.org/plus/dsa/problems/floor-and-ceil-in-a-bst?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {}
};

//TC = O(h) && SC = O(1)
class Solution {
public:
    vector<int> floorCeilOfBST(TreeNode *root, int key) {
        int floor = -1, ceil = -1;
        while(root) {
            if(root->data == key) {
                floor = key;
                ceil = key;
                break;
            }
            else if(root->data < key) {
                floor = root->data;
                root = root->right;
            }
            else {
                ceil = root->data;
                root = root->left;
            }
        }
        return {floor, ceil};
    }
};

TreeNode *buildTree(vector<string> &arr) {
    if(arr.size() == 0 || arr[0] == "null")
        return 0;

    TreeNode *root = new TreeNode(stoi(arr[0]));
    queue<TreeNode *> q;
    q.push(root);

    int i = 1;
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

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int key; cin >> key;

    vector<string> arr;
    string temp = "";

    for(char c : s) {
        if(c == '[' || c == ']')
            continue;

        if(c == ',') {
            arr.push_back(temp);
            temp = "";
        }
        else    
            temp += c;
    }
    arr.push_back(temp);

    TreeNode *root = buildTree(arr);
    Solution sol;
    vector<int> ans = sol.floorCeilOfBST(root, key);

    cout << "[" << ans[0] << "," << ans[1] << "]";

    return 0;
}