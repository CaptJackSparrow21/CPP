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
        int i=0, n = s.size();
        int sign = 1;
        int result = 0;

        //skip leading whitespaces
        while(i < n && s[i] == ' ') i++;

        //checking for sign
        if(i < n && (s[i] == '+' || s[i] == '-')) {
            sign = ((s[i] == '-') ? -1 : 1);
            i++;
        }

        //converting digits and handling overflow
        while(i <n && isdigit(s[i])) {
            int digit = s[i] - '0';

            //checking overflow before actually adding the digit
            if(result > (INT_MAX - digit) / 10) {
                return ((sign == 1) ? INT_MAX : INT_MIN);
            }

            result = result * 10 + digit;
            i++;
        }
        return sign * result;
    }
};
// @lc code=end

