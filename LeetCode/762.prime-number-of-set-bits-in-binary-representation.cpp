/*
 * @lc app=leetcode id=762 lang=cpp
 *
 * [762] Prime Number of Set Bits in Binary Representation
 */

// @lc code=start
class Solution {
public:
    bool isPrime(int x) {
        return (x == 2 || x == 3 || x == 5 || x == 7 ||
            x == 11 || x == 13 || x == 17 || x == 19);
    }

    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for(int num = left; num <= right; num++) {
            int bits = __builtin_popcount(num);

            if(isPrime(bits))
                cnt++;
        }   

        return cnt;
    }
};
// @lc code=end

