//https://takeuforward.org/plus/dsa/problems/number-of-operations-to-make-network-connected?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O((n+m)α(n)) && SC = O(n)
//α(n) (inverse Ackermann function)
class Solution {
public:
    vector<int> parent, sz;

    int find(int x) {
        if(parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int u, int v) {
        u = find(u);
        v = find(v);

        if(u == v)
            return;

        if(sz[u] < sz[v])
            swap(u, v);

        parent[v] = u;
        sz[u] += sz[v];
    }

    int solve(int n, vector<vector<int>> &Edge) {
        parent.resize(n);
        sz.assign(n, 1);

        for(int i=0; i<n; i++)
            parent[i] = i;
        
        int extraEdges = 0;

        for(auto &e : Edge) {
            int u = e[0], v = e[1];

            if(find(u) == find(v))
                extraEdges++;
            else
                unite(u, v);
        }

        int components = 0;
        for(int i=0; i<n; i++)
            if(find(i) == i)
                components++;

        int need = components - 1;

        return (extraEdges >= need) ? need : -1;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

    vector<vector<int>> Edge;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                Edge.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.solve(n, Edge);

    return 0;
}