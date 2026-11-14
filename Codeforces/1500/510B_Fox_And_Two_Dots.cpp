#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, m;
vector<string> a;
vector<vector<bool>> vis;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool dfs(int i, int j, int pi, int pj) {
    vis[i][j] = true;

    for(int d = 0; d < 4; d++) {
        int ni = i + dx[d];
        int nj = j + dy[d];

        if(ni < 0 || ni >= n || nj < 0 || nj >= m)
            continue;

        if(a[ni][nj] != a[i][j])
            continue;

        if(!vis[ni][nj]) {
            if(dfs(ni, nj, i, j))
                return true;
        }
        else if(ni != pi || nj != pj)
            return true;
    }
    return false;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    a.resize(n);
    for(auto &i : a) cin >> i;

    vis.assign(n, vector<bool> (m, false));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(!vis[i][j]) {
                if(dfs(i, j, -1, -1)) {
                    cout << "Yes\n";
                    return 0;
                }
            }
        }
    }

    cout << "No\n";

    return 0;
}