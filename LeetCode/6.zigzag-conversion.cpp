/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.size()) return s;
        vector<string> rows(numRows, "");
        int currRow = 0;
        int direction = 1; // +1 going down , -1 going up

        for(int i=0; i<s.size(); i++) {
            char c = s[i];
            rows[currRow].push_back(c);

            if(currRow == 0) direction = 1;
            else if(currRow == numRows - 1) direction = -1;
            currRow += direction;
        }
        string ans;
        for(int i=0; i<numRows; i++) {
            ans += rows[i];
        }
        return ans; 
    }
};
// @lc code=end

