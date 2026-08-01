//https://takeuforward.org/plus/dsa/problems/disjoint-set-?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(α(N)) && SC = O(N)
//α(N) is the inverse Ackermann function, 
//which grows extremely slowly
class DisjointSet {
public:
    vector<int> parent, rank, size;

    int findParent(int node) {
        if(parent[node] == node)
            return node;

        return parent[node] = findParent(parent[node]);
    }

    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        size.resize(n, 1);

        for(int i=0; i<n; i++)
            parent[i] = i;
    }

    bool find(int u, int v) {
        return findParent(u) == findParent(v);
    }

    void unionByRank(int u, int v) {
        int pu = findParent(u);
        int pv = findParent(v);

        if(pu == pv)
            return;

        if(rank[pu] < rank[pv])
            parent[pu] = pv;
        else if(rank[pv] < rank[pu])
            parent[pv] = pu;
        else {
            parent[pv] = pu;
            rank[pu]++;
        }
    }

    void unionBySize(int u, int v) {
        int pu = findParent(u);
        int pv = findParent(v);

        if(pu == pv)
            return;

        if(size[pu] < size[pv]) {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    vector<string> ops;
    string curr = "";

    for(char c : s1) {
        if(isalpha(c))
            curr += c;
        else if(!curr.empty()) {
            ops.push_back(curr);
            curr.clear();
        }
    }

    vector<vector<int>> args;
    vector<int> temp;
    int num = 0;
    bool reading = false;

    for(char c : s2) {
        if(isdigit(c)) {
            num = num * 10 + (c - '0');
            reading = true;
        }
        else {
            if(reading) {
                temp.
            }
        }
    }

    return 0;
}