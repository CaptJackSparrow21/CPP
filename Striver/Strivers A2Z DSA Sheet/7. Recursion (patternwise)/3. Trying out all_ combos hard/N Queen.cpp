//https://takeuforward.org/plus/dsa/problems/n-queen

#include<bits/stdc++.h>
using namespace std;

//TC = O(n!) = O(n log n) && SC = O(n)
class Solution {
public:
    vector<vector<string>> ans;
    vector<string> board;
    vector<bool> col, rd, ld;

    void solve(int n, int row) {
        if(row == n) {
            ans.push_back(board);
            return;
        }

        for(int c=0; c<n; c++) {
            //ld = row - column + (n-1)
            //rd = row + column
            if(!col[c] && !ld[row-c+n-1] && !rd[row+c]) {
                board[row][c] = 'Q';
                col[c]=ld[row-c+n-1]=rd[row+c]=true;

                solve(n, row+1);

                board[row][c] = '.';
                col[c]=ld[row-c+n-1]=rd[row+c]=false;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        ans.clear();

        board.resize(n, string(n, '.'));
        col.resize(n, false);
        ld.resize(2 * n - 1, false);
        rd.resize(2 * n - 1, false);

        solve(n, 0);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    Solution sol;
    vector<vector<string>> ans = sol.solveNQueens(n);

    cout << "[";
    if(ans.empty()) {
        cout << "[]";
    } 
    else {
        for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size(); j++) {
            cout << "\"" << ans[i][j] << "\"";
            cout << ((j+1) == ans[i].size() ? "" : ",");
            }   
        cout << "]";
        cout << ((i+1) == ans.size() ? "" : ",");
        }   
    }
    cout << "]";

    return 0;
}