/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i=0;
        while(i < n && s[i] == ' ') i++;

        if(i == n) return 0;

        int sign = 1;
        if(s[i] == '+' || s[i] == '-') {
            if(s[i] == '-') sign = -1;
            i++;
        }

        long long ans = 0;
        while(i < n && s[i] >= '0' && s[i] <= '9') {
            int d = s[i] - '0';

            if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && d > INT_MAX % 10)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + d;
            i++;
        }
        return (int)(sign * ans);
    }
};
// @lc code=end

