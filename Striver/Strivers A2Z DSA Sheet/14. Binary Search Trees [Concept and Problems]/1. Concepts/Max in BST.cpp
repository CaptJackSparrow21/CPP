//Understanding the Menu
// The menu numbers are:
// 1 x → Search x
// 2   → Find Maximum
// 3   → Find Minimum
// 4 x → Insert x
// 5   → Exit

#include<bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode {
    int data;
    TreeNode *left, *right;
    TreeNode (int val) : data(val), left(nullptr), right(nullptr) {}
};

//TC = SC = O(h)
TreeNode *insert(TreeNode *root, int x) {
    if(!root)
        return new TreeNode(x);

    if(x < root->data)
        root->left = insert(root->left, x);
    else if(x > root->data)
        root->right = insert(root->right, x);

    return root;
}

bool search(TreeNode *root, int x) {
    if(!root) return false;

    if(root->data == x) return true;

    if(x < root->data)
        return search(root->left, x);
    else 
        return search(root->right, x);
}

int findMin(TreeNode *root) {
    while(root->left)
        root = root->left;
    return root->data;
}

int findMax(TreeNode *root) {
    while(root->right)
        root = root->right;
    return root->data;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    TreeNode *root = nullptr;
    int ch;

    while(cin >> ch) {
        if(ch == 1) {
            int x;
            cin >> x;

            if(search(root, x)) 
                cout << "Found\n";
            else    
                cout << "NULL\n";
        }

        else if(ch == 2) {
            if(root)
                cout << findMin(root) << '\n';
        }

        else if(ch == 3) {
            if(root)
                cout << findMax(root) << '\n';
        }

        else if(ch == 4) {
            int x;
            cin >> x;
            root = insert(root, x);
        }

        else if(ch == 5)
            break;
    }
 
    return 0;
}