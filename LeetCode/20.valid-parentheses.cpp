/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++) {
            char c = s[i];
            if(c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
            else {
                if(st.empty()) return false;
                char t = st.top();
                st.pop();
                if((c == ')' && t != '(') ||
                    (c == ']' && t != '[') ||
                    (c == '}' && t != '{')) {
                        return false;
                }
            }
        }
        return st.empty();
    }
};
// @lc code=end

