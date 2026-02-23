/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for(int r=0; r<9; r++) {
            for(int c=0; c<9; c++) {
                if(board[r][c] == '.') continue;
                int num = board[r][c] - '0';
                int idx = num-1;
                int bidx = (r/3) * 3 + (c/3);

                if(rows[r][idx] || cols[c][idx] || boxes[bidx][idx]) {
                    return false;
                }

                rows[r][idx] = true;
                cols[c][idx] = true;
                boxes[bidx][idx] = true;
            }
        }
        return true;
    }
};
// @lc code=end

