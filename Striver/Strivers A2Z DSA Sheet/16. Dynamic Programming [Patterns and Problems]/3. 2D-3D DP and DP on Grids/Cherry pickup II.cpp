//https://takeuforward.org/practice/dsa/cherry-pickup-ii

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * m^2) && SC = O(m^2)
class Solution {
public:
    int cherryPickup(vector<vector<int>> &matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> next(m, vector<int> (m));

        for(int j1=0; j1<m; j1++) {
            for(int j2=0; j2<m; j2++) {
                next[j1][j2] = matrix[n-1][j1] +
                        (j1 == j2 ? 0 : matrix[n-1][j2]);
            }
        }

        for(int i=n-2; i>=0; i--) {
            vector<vector<int>> curr(m, vector<int> (m, 0));

            for(int j1=0; j1<m; j1++) {
                for(int j2=0; j2<m; j2++) {
                    int best = 0;

                    for(int d1=-1; d1<=1; d1++) {
                        for(int d2=-1; d2<=1; d2++) {
                            int nj1 = j1 + d1;
                            int nj2 = j2 + d2;

                            if(nj1 >=0 && nj1 < m &&
                               nj2 >= 0 && nj2 < m)
                                    best = max(best, 
                                        next[nj1][nj2]);
                        }
                    }
                curr[j1][j2] = matrix[i][j1] + 
                    (j1 == j2 ? 0 : matrix[i][j2]) + best;
                }
            }
            next = curr;
        }
        return next[0][m-1];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<vector<int>> matrix;
    vector<int> row;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                matrix.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.cherryPickup(matrix);

    return 0;
}