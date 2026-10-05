/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int j = 0;

        if(n < m) return -1;

        for(int i=0; i<n; i++) {
            if(haystack[i] == needle[j])
                j++;
            else {
                i -= j;
                j = 0;
            }

            if(j == m)
                return i - m + 1;
        }
        return -1;


        // int m = haystack.size();
        // int n = needle.size();

        // if(n == 0) return 0;

        // vector<int> lps(n, 0);
        // for(int i=1, len=0; i<n;) {
        //     if(needle[i] == needle[len]) {
        //         lps[i++] = ++len;
        //     }
        //     else if(len > 0) {
        //         len = lps[len -1];
        //     }
        //     else {
        //         lps[i++] = 0;
        //     }
        // }

        // for(int i=0, j=0; i<m;) {
        //     if(haystack[i] == needle[j]) {
        //         i++; j++;
        //         if(j == n) return i - n;
        //     }
        //     else if(j > 0) {
        //         j = lps[j-1];
        //     }
        //     else {
        //         i++;
        //     }
        // }
        // return -1;
    }
};
// @lc code=end

