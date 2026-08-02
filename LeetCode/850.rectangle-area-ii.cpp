/*
 * @lc app=leetcode id=850 lang=cpp
 *
 * [850] Rectangle Area II
 */

// @lc code=start
class Solution {
public:
    int rectangleArea(vector<vector<int>>& rectangles) {

        const int MOD = 1e9 + 7;
        long long ans = 0;

        // Store all unique x and y coordinates
        set<int> xSet, ySet;

        for (auto &rect : rectangles) {
            xSet.insert(rect[0]);
            xSet.insert(rect[2]);

            ySet.insert(rect[1]);
            ySet.insert(rect[3]);
        }

        // Coordinate Compression
        vector<int> x(xSet.begin(), xSet.end());
        vector<int> y(ySet.begin(), ySet.end());

        // Grid to mark covered compressed cells
        vector<vector<int>> covered(
            x.size(),
            vector<int>(y.size(), 0)
        );

        for (auto &rect : rectangles) {

            int x1 = rect[0];
            int y1 = rect[1];
            int x2 = rect[2];
            int y2 = rect[3];

            auto xStart = lower_bound(x.begin(), x.end(), x1);
            auto yStart = lower_bound(y.begin(), y.end(), y1);

            // Traverse all compressed x-intervals
            for (auto xi = xStart; *xi != x2; ++xi) {

                // Traverse all compressed y-intervals
                for (auto yi = yStart; *yi != y2; ++yi) {

                    int row = xi - x.begin();
                    int col = yi - y.begin();

                    // First time this small rectangle is covered
                    if (covered[row][col] == 0) {

                        covered[row][col] = 1;

                        long long width  = *(next(xi)) - *xi;
                        long long height = *(next(yi)) - *yi;

                        ans = (ans + width * height) % MOD;
                    }
                }
            }
        }

        return ans;
    }
};
// @lc code=end

