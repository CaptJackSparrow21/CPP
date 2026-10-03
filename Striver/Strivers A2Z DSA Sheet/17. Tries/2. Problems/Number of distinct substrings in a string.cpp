//https://takeuforward.org/practice/dsa/number-of-distinct-substrings-in-a-string

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n^2)
class Solution {
public:
    struct Node {
        Node *child[26]{};
    };

    int countDistinctSubstring(string s) {
        Node *root = new Node();
        int ans = 1;

        for(int i=0; i<s.size(); i++) {
            Node *curr = root;
            for(int j=i; j<s.size(); j++) {
                int c = s[j] - 'a';
                if(!curr->child[c]) {
                    curr->child[c] = new Node();
                    ans++;
                }
                curr = curr->child[c];
            }
        }
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    Solution sol;
    cout << sol.countDistinctSubstring(s);  

    return 0;
}