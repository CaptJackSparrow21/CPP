/*
 * @lc app=leetcode id=85 lang=cpp
 *
 * [85] Maximal Rectangle
 */

// @lc code=start
class Solution {
public:
    int largestRectangleArea(vector<int> &h) {
        stack<int> st;
        int n = h.size(), ans = 0;

        for(int i=0; i<=n; i++) {
            while(!st.empty() && (i == n || h[st.top()] >= h[i])) {
                int height = h[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                ans = max(ans, height * width);
            }
            st.push(i);
        }
        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int ans = 0;
        vector<int> h(n, 0);

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++)
                h[j] = (matrix[i][j] == '1') ? h[j] + 1 : 0;

            ans = max(ans, largestRectangleArea(h));
        }
        return ans;
    }
};
// @lc code=end

