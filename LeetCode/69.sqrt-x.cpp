/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;
        int low = 1, high = x / 2;
        int ans = 0;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            long long sq = 1LL * mid * mid;

            if(sq == x) {
                return mid;
            }
            else if(sq < x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end

