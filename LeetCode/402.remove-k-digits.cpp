/*
 * @lc app=leetcode id=402 lang=cpp
 *
 * [402] Remove K Digits
 */

// @lc code=start
class Solution {
public:
    string removeKdigits(string num, int k) {
        string st = "";

        for(char c : num) {
            while(!st.empty() && k > 0 && st.back() > c) {
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }

        while(k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }

        int i=0;
        while(i < st.size() && st[i] == '0') i++;

        string ans = st.substr(i);
        return ans.empty() ? "0" : ans;
    }
};
// @lc code=end

