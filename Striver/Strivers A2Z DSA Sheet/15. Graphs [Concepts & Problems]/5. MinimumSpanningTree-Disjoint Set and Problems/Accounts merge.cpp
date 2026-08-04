//https://takeuforward.org/plus/dsa/problems/accounts-merge?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n log n) && SC = O(n)
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

    void unionBySize(int u, int v) {
        u = findPar(u);
        v = findPar(v);

        if(u == v)
            return;

        if(size[u] < size[v])
            swap(u, v);

        parent[v] = u;
        size[u] += size[v];
    }
};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>> accounts) {
        int n = accounts.size();

        DisjointSet ds(n);

        unordered_map<string, int> mailNode;

        for(int i=0; i<n; i++) {
            for(int j=1; j<accounts[i].size(); j++) {
                string mail = accounts[i][j];

                if(!mailNode.count(mail))
                    mailNode[mail] = i;
                else    
                    ds.unionBySize(i, mailNode[mail]);
            }
        }

        vector<vector<string>> mergedMail(n);
        for(auto &it : mailNode) {
            string mail = it.first;
            int node = it.second;

            int parent = ds.findPar(node);
            mergedMail[parent].push_back(mail);
        }

        vector<vector<string>> ans;
        for(int i=0; i<n; i++) {
            if(mergedMail[i].empty())
                continue;

            sort(mergedMail[i].begin(), mergedMail[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for(auto &mail : mergedMail[i])
                temp.push_back(mail);

            ans.push_back(temp);
        }
        return ans;
    }
};

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<string>> accounts;

    for (int i = 0; i < n; i++) {

        int m;
        cin >> m;

        vector<string> acc;

        for (int j = 0; j < m; j++) {
            string s;
            cin >> s;
            acc.push_back(s);
        }

        accounts.push_back(acc);
    }

    Solution obj;

    vector<vector<string>> ans = obj.accountsMerge(accounts);

    for (auto &v : ans) {
        cout << "[ ";
        for (auto &x : v)
            cout << x << " ";
        cout << "]\n";
    }

    return 0;
}