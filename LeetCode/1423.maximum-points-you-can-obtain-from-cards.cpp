/*
 * @lc app=leetcode id=1423 lang=cpp
 *
 * [1423] Maximum Points You Can Obtain from Cards
 */

// @lc code=start
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        vector<int> c = cardPoints;

        int windowSize = n - k;

        int total = 0;
        for(int i=0; i<n; i++) 
            total += c[i];

        if(windowSize == 0) return total;
        int windowSum = 0;

        for(int i=0; i<windowSize; i++)
            windowSum += c[i];

        int minWindow = windowSum;

        for(int r=windowSize; r<n; r++) {
            windowSum += c[r];
            windowSum -= c[r - windowSize];
            minWindow = min(minWindow, windowSum);
        }
        return total - minWindow;
    }
};
// @lc code=end

