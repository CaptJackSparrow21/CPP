//https://takeuforward.org/plus/dsa/problems/word-search

#include<bits/stdc++.h>
using namespace std;

//TC = O(m * n * 3^L) && SC = O(L)
class Solution{
public:
    bool exist(vector<vector<char>> &board, string word) {
        
        int m = board.size();
        int n = board[0].size();

        for(int i=0; i<m; i++) 
            for(int j=0; j<n; j++) 
                if(dfs(board, word, i, j, 0))
                    return true;
            
        return false;
    }

private:
    bool dfs(vector<vector<char>> &board,
            string &word, int i, int j, int k) {
        if(k == word.size()) return true;
        if(i<0 || j<0 || i>=board.size() || 
            j>=board[0].size() || board[i][j] != word[k])
            return false;

        char saved = board[i][j];
        board[i][j] = '#';

        bool ok = dfs(board, word, i, j+1, k+1) ||
                  dfs(board, word, i, j-1, k+1) ||
                  dfs(board, word, i-1, j, k+1) ||
                  dfs(board, word, i+1, j, k+1);

        board[i][j] = saved;
        return ok;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n;
    cin >> m >> n;

    vector<vector<char>> board(m, vector<char>(n));
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin >> board[i][j];
    
    string word; cin >> word;

    Solution sol;
    cout << boolalpha << sol.exist(board, word);

    return 0;
}