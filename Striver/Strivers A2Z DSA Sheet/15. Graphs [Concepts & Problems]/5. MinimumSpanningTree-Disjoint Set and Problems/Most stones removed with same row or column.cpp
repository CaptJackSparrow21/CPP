//https://takeuforward.org/plus/dsa/problems/most-stones-removed-with-same-row-or-column?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC : O(n α(N)) 
//SC : O(maxRow + maxCol)
//α(N) -> inverse Ackermann function
class DisjointSet {
public:
    vector<int> parent, sz;

    DisjointSet(int n) {
        parent.resize(n);
        sz.assign(n, 1);

        for(int i=0; i<n; i++)
            parent[i] = i;
    }

    int findPar(int node) {
        if(node == parent[node])
            return node;
        return parent[node] = findPar(parent[node]);
    }

    void unionBySize(int u, int v) {
        u = findPar(u);
        v = findPar(v);

        if(u == v) return;

        if(sz[u] < sz[v])
            swap(u, v);

        parent[v] = u;
        sz[u] += sz[v];
    }
};

class Solution {
public:
    int maxRemove(vector<vector<int>> &stones, int n) {
        int maxRow = 0, maxCol = 0;

        for(auto &it : stones) {
            maxRow = max(maxRow, it[0]);
            maxCol = max(maxCol, it[1]);
        }

        DisjointSet ds(maxRow + maxCol + 2);

        unordered_set<int> usedNodes;

        for(auto &it : stones) {
            int rowNode = it[0];
            int colNode = it[1] + maxRow + 1;

            ds.unionBySize(rowNode, colNode);

            usedNodes.insert(rowNode);
            usedNodes.insert(colNode);
        }

        int comp = 0;
        for(int node : usedNodes) {
            if(ds.findPar(node) == node)
                comp++;
        }

        return n - comp;
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
    
    vector<vector<int>> stones;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                stones.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.maxRemove(stones, n);

    return 0;
}