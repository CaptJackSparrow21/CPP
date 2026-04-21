/*
 * @lc app=leetcode id=812 lang=cpp
 *
 * [812] Largest Triangle Area
 */

// @lc code=start
class Solution {
public:
    double area(vector<int> &A, vector<int> &B, vector<int> &C) {
        return 0.5 * abs(
            A[0] * (B[1] - C[1]) +
            B[0] * (C[1] - A[1]) +
            C[0] * (A[1] - B[1])
        );
    }
 
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double ans = 0;

        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                for(int k=j+1; k<n; k++)
                    ans = max(ans, area(points[i], points[j], points[k]));

        return ans;
    }
};
// @lc code=end

