/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix = strs[0];

        for(int i=1; i<strs.size(); i++) {
            while(strs[i].find(prefix) != 0) {
                prefix.pop_back();
                if(prefix.empty()) return "";
            }
        }
        return prefix;
    }
};
// @lc code=end

