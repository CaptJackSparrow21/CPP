//https://takeuforward.org/plus/dsa/problems/number-of-islands-ii?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(k * α(nm)) ≈ O(k)
//SC = O(n * m)
class DisjointSet {
public:
    vector<int> parent, size;

    DisjointSet(int n) {
        parent.resize(n);
        size.assign(n, 1);
        for(int i=0; i<n; i++)
            parent[i] = i;
    }

    int findPar(int node) {
        if(node == parent[node])
            return node;
        return parent[node] = findPar(parent[node]);
    }

    void unionBysize(int u, int v) {
        u = findPar(u);
        v = findPar(v);

        if(u == v) return;

        if(size[u] < size[v])
            swap(u, v);

        parent[v] = u;
        size[u] += size[v];
    }
};

class Solution {
public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &A) {
        DisjointSet ds(n * m);

        vector<vector<int>> vis(n, vector<int> (m, 0));
        vector<int> ans;

        int cnt = 0;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for(auto &it : A) {
            int r = it[0];
            int c = it[1];

            if(vis[r][c]) {
                ans.push_back(cnt);
                continue;
            }

            vis[r][c] = 1;
            cnt++;

            int node = r * m + c;

            for(int k=0; k<4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr >= 0 && nr < n &&
                   nc >= 0 && nc < m && vis[nr][nc]) {
                    int adjNode = nr * m + nc;
                    if(ds.findPar(node) != ds.findPar(adjNode)) {
                        ds.unionBysize(node, adjNode);
                        cnt--;
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n;
    cin >> m;
    cin >> k;
    cin.ignore();
    string s;
    getline(cin, s);

    vector<vector<int>> A;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                A.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    vector<int> ans = sol.numOfIslands(n, m, A);
    
    cout << '[';
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i+1 != ans.size())
            cout << ',';
    }
    cout << ']';

    return 0;
}