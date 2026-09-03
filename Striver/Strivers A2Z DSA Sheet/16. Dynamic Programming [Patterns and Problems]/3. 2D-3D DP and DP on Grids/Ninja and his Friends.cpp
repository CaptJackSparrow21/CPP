//https://takeuforward.org/plus/dsa/problems/ninja-and-his-friends?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(r * c^2) && SC = O(c^2)
class Solution {
public:
    int maxChocolates(vector<vector<int>> &g) {
        int r = g.size(), c = g[0].size();
        vector<vector<int>> next(c, vector<int> (c, 0));

        for(int j1=0; j1<c; j1++) {
            for(int j2=0; j2<c; j2++) {
                if(j1 == j2)
                    next[j1][j2] = g[r-1][j1];
                else 
                    next[j1][j2] = g[r-1][j1] + g[r-1][j2];
            }
        }

        for(int i=r-2; i>=0; i--) {
            vector<vector<int>> curr(c, vector<int> (c,0));

            for(int j1=0; j1<c; j1++) {
                for(int j2=0; j2<c; j2++) {
                    int chocolates;

                    if(j1 == j2)
                        chocolates = g[i][j1];
                    else 
                        chocolates = g[i][j1] + g[i][j2];

                    int best = 0;

                    for(int d1=-1; d1<=1; d1++) {
                        for(int d2=-1; d2<=1; d2++) {
                            int nj1 = j1 + d1;
                            int nj2 = j2 + d2;

                            if(nj1 >= 0 && nj1 < c &&
                               nj2 >= 0 && nj2 < c) {
                                best = max(best, next[nj1][nj2]);
                            }
                        }
                    }
                    curr[j1][j2] = chocolates + best;
                }
            }
            next = curr;
        }
        return next[0][c-1];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    vector<vector<int>> g;
    vector<int> row;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                g.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.maxChocolates(g);

    return 0;
}