//https://takeuforward.org/plus/dsa/problems/morris-inorder-traversal-?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

//TC = O(n) && SC = O(1)
class Solution {
public:
    vector<int> getInorder(TreeNode *root) {
        vector<int> ans;

        TreeNode *curr = root;

        while(curr) {
            //case 1 : no left child
            if(curr->left == nullptr) {
                ans.push_back(curr->data);
                curr = curr->right;
            }
            //case 2 : left child exists
            else {
                TreeNode *pred = curr->left;

                //find inorder predecessor
                while(pred->right && pred->right != curr)
                    pred = pred->right;
                
                //create thread
                if(pred->right == nullptr) {
                    pred->right = curr;
                    curr = curr->left;
                }

                //thread already exists
                else {
                    pred->right = nullptr;
                    ans.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }
        return ans;
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
    vector<int> ans = sol.getInorder(root);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}