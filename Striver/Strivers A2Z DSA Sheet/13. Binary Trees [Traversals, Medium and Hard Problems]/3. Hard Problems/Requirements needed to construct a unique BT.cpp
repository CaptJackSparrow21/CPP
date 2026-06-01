//https://takeuforward.org/plus/dsa/problems/requirements-needed-to-construct-a-unique-bt?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(1)
class Solution {
public:
    bool uniqueBinaryTree(int a, int b) {
        //1 - preorder, 2 - inorder, 3 - postorder
        return (a != b) && (a == 2 || b == 2);
        // if(a == 1 && b == 2)
        //     return true;
        // else if(a == 2 && b == 1)
        //     return true;
        // else if(a == 2 && b == 3)
        //     return true;
        // else if(a == 3 && b == 2)
        //     return true;
        // else 
        //     return false;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;

    Solution sol;
    cout << boolalpha << sol.uniqueBinaryTree(a, b);

    return 0;
}