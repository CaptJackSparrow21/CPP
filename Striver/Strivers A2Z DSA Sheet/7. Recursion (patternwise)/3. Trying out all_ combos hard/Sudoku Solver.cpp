//https://takeuforward.org/plus/dsa/problems/sudoko-solver

#include<bits/stdc++.h>
using namespace std;

//TC = O(9^E) : E -> no. of empty cells
//SC = O(81) = O(1)
class Solution {
public:
    bool isSafe(vector<vector<char>> &board, 
        int r, int c, char ch) {
        for(int i=0; i<9; i++) {
            if(board[r][i] == ch) return false; //row check
            if(board[i][c] == ch) return false; //col check
            int boxRow = 3 * (r/3) + i / 3;
            int boxCol = 3 * (c/3) + i % 3;
            if(board[boxRow][boxCol] == ch) 
                return false;       //box check
        }
        return true;
    }

    bool solve(vector<vector<char>> &board) {
        for(int r=0; r<9; r++) {
            for(int c=0; c<9; c++) {
                if(board[r][c] == '.') {
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

    void solveSudoku(vector<vector<char>> &board) {
        solve(board);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<char>> board(9, vector<char> (9, '.'));
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            string cell;
            cin >> cell;
            board[i][j] = cell[0];
        }
    }

    Solution sol;
    sol.solveSudoku(board);

    cout << "[";
    for(int i=0; i<9; i++) {
        cout << "[";
        for(int j=0; j<9; j++) {
            cout << "\"" << board[i][j] << "\"";
            if(j<8) cout << ",";
        }
        cout << "]";
        if(i<8) cout << ",";
    }
    cout << "]";

    return 0;
}