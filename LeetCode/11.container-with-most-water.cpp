/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
//TC = O(n) &n SC = O(1)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1;
        int ans = 0;

        while(left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            ans = max(ans, width * h);

            if(height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return ans;
    }
};
// @lc code=end

