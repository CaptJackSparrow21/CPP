//https://takeuforward.org/plus/dsa/problems/serialize-and-de-serialize-bt?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {}
};

//TC = SC = O(n)
class Solution {
public:
    string serialize(TreeNode *root) {
        if(!root)
            return "";

        string ans;
        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode *node = q.front();
            q.pop();

            if(node == nullptr) {
                ans += "# ";
                continue;
            }

            ans += to_string(node->data) + " ";

            q.push(node->left);
            q.push(node->right);
        }
        return ans;
    }

    TreeNode *deserialize(string data) {
        if(data.empty())
            return nullptr;

        stringstream ss(data);

        string val;
        ss >> val;

        TreeNode *root = new TreeNode(stoi(val));

        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode *node = q.front();
            q.pop();

            string leftVal, rightVal;
            if(!(ss >> leftVal))
                break;

            if(leftVal != "#") {
                node->left = new TreeNode(stoi(leftVal));
                q.push(node->left);
            }

            if(!(ss >> rightVal))
                break;

            if(rightVal != "#") {
                node->right = new TreeNode(stoi(rightVal));
                q.push(node->right);
            }
        }
        return root;   
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


    return 0;
}