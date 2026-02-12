/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int depth = 0, ans = 0;
        for(int i=0; i<s.size(); i++) {
            char c = s[i];
            if(c == '(') {
                depth++;
                ans = max(ans, depth);
            }
            else if(c == ')') depth--;
        }
        return ans;
    }
};
// @lc code=end

