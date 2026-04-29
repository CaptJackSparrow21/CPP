#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for(auto &row : grid) cin >> row;

        string target = "vika";
        int idx = 0;
        for(int j=0; j<m && idx<4; j++) {
            for(int i=0; i<n; i++) {
                if(grid[i][j] == target[idx]) {
                    idx++;
                    break;
                }
            }
        }
        cout << (idx == 4 ? "YES\n" : "NO\n");
    }

    return 0;
}