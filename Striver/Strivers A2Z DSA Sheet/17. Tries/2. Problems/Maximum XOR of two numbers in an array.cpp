//https://takeuforward.org/practice/dsa/maximum-xor-of-two-numbers-in-an-array

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n)
class Solution {
public:
    struct Node {
        Node *child[2]{};
    };

    void insert(Node *root, int x) {
        Node *curr = root;
        for(int b=31; b>=0; b--) {
            int bit = (x >> b) & 1;
            if(!curr->child[bit])
                curr->child[bit] = new Node();
            curr = curr->child[bit];
        }
    }

    int maxXor(Node *root, int x) {
        Node *curr = root;
        int ans = 0;
        for(int b=31; b>=0; b--) {
            int bit = (x >> b) & 1;
            int opposite = bit ^ 1;
            if(curr->child[opposite]) {
                ans |= (1 << b);
                curr = curr->child[opposite];
            }
            else 
                curr = curr->child[bit];
        }
        return ans;
    }

    int findMaximumXOR(vector<int> &nums) {
        Node *root = new Node();
        for(int x : nums)
            insert(root, x);

        int ans = 0;
        for(int x : nums)
            ans = max(ans, maxXor(root, x));

        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<int> nums;
    string temp;
    for(char c : s) {
        if(isalnum(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            nums.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << sol.findMaximumXOR(nums);

    return 0;
}