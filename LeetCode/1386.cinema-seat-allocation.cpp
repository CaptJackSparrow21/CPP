/*
 * @lc app=leetcode id=1386 lang=cpp
 *
 * [1386] Cinema Seat Allocation
 */

// @lc code=start
class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> row;

        for(auto &r : reservedSeats)
            row[r[0]] |= 1 << (r[1] - 1);

        int ans = 2 * (n - row.size());

        for(auto &[r, mask] : row) {
            bool left = !(mask & 0b0000011110);
            bool right = !(mask & 0b0111100000);
            bool mid = !(mask & 0b0001111000);

            if(left & right)
                ans += 2;
            else if(left || mid || right)
                ans += 1;
        }
        return ans;
    }
};
// @lc code=end

