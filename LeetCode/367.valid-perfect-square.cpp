/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
#define ll long long
class Solution {
public:
    bool isPerfectSquare(int num) {
        ll low = 1, high = num;

        while(low <= high) {
            ll mid = low + (high - low) / 2;
            ll sq = mid * mid;

            if(sq == num) return true;
            else if(sq < num) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};
// @lc code=end

