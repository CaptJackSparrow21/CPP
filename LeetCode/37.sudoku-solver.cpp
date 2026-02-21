/*
 * @lc app=leetcode id=37 lang=cpp
 *
 * [37] Sudoku Solver
 */

// @lc code=start
class Solution {
public:
    bool isSafe(vector<vector<char>> & board, int r, int c, char ch) {
        for(int i=0; i<9; i++) {
            if(board[r][i] == ch) return false;
            if(board[i][c] == ch) return false;
            int boxRow = 3 * (r/3) + i / 3;
            int colRow = 3 * (c/3) + i % 3;
            if(board[boxRow][colRow] == ch) return false; 
        }
        return true;
    }

    bool solve(vector<vector<char>> &board) {
        for(int r=0; r<9; r++) {
            for(int c=0; c<9; c++) {
                if(board[r][c]=='.') {
                    for(char ch='1'; ch<='9'; ch++) {
                        if(isSafe(board, r, c, ch)) {
                            board[r][c] = ch;
                            if(solve(board)) return true;   
                            board[r][c] = '.';  
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
// @lc code=end

