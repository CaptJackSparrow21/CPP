/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> ans;
    vector<string> board;
    vector<bool> col, ld, rd;

    void solve(int n, int row) {
        if(row == n) {
            ans.push_back(board);
            return;
        }

        for(int c=0; c<n; c++) {
            if(!col[c] && !ld[row - c + n - 1] && !rd[row + c]) {
                board[row][c] = 'Q';
                col[c] = ld[row - c + n - 1] = rd[row + c] = true;

                solve(n, row + 1);
                board[row][c] = '.';
                col[c] = ld[row - c + n - 1] = rd[row + c] = false;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        //ans.clear();

        board.resize(n, string(n, '.'));
        col.resize(n, false);
        ld.resize(2 * n - 1, false);
        rd.resize(2 * n - 1, false);

        solve(n, 0);
        return ans;
    }
};
// @lc code=end

