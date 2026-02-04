//https://takeuforward.org/plus/dsa/problems/generate-parentheses

#include<bits/stdc++.h>
using namespace std;

//TC - O(catalan no.) || O(4^n / n^(1/2)) 
//SC - recursion depth - O(n) & output size - O(catalan * n) 
class Solution {
    void backtrack(int n, int open, int close, 
            string &curr, vector<string> &ans) {
        if((int) curr.size() == 2 * n) {
            ans.push_back(curr);
            return;
        }
        if(open < n) {
            curr.push_back('(');
            backtrack(n, open + 1, close, curr, ans);
            curr.pop_back();
        }
        if(close < open) {
            curr.push_back(')');
            backtrack(n, open, close + 1, curr, ans);
            curr.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr;
        backtrack(n, 0, 0, curr, ans);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; cin >> n;
    Solution sol;
    vector<string> ans = sol.generateParenthesis(n);
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << "  ";
    }

    return 0;
}