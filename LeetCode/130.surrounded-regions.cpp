/*
 * @lc app=leetcode id=130 lang=cpp
 *
 * [130] Surrounded Regions
 */

// @lc code=start
class Solution {
public:
    void dfs(int r, int c, vector<vector<char>> &board,
                vector<vector<int>> &vis) {
        int n = board.size();
        int m = board[0].size();

        vis[r][c] = 1;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for(int k=0; k<4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr >= 0 && nr < n &&  nc >= 0 && nc < m
                && !vis[nr][nc] && board[nr][nc] == 'O')
                    dfs(nr, nc, board, vis);
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> vis(n, vector<int> (m, 0));

        for(int j=0; j<m; j++) {
            if(board[0][j] == 'O')
                dfs(0, j, board, vis);
        }

        for(int j=0; j<m; j++) {
            if(board[n-1][j] == 'O')
                dfs(n-1, j, board, vis);
        }

        for(int i=0; i<n; i++) {
            if(board[i][0] == 'O')
                dfs(i, 0, board, vis);
        }

        for(int i=0; i<n; i++) {
            if(board[i][m-1] == 'O')
                dfs(i, m-1, board, vis);
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(board[i][j] == 'O' && !vis[i][j])
                    board[i][j] = 'X';
            }
        }
    }
};
// @lc code=end

