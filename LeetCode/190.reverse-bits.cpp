/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    int reverseBits(int n) {
        unsigned int ans = 0;
        for(int i=0; i<32; i++) {
            ans <<= 1;

            ans |= (n & 1);
            n >>= 1;
        }
        return static_cast<int>(ans);
    }
};
// @lc code=end

