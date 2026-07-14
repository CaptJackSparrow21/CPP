//https://takeuforward.org/plus/dsa/problems/course-schedule-ii?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(V + E)
class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>> arr) {
        vector<int> adj[N];

        for(auto it : arr) {
            int course = it[0];
            int pre = it[1];

            adj[pre].push_back(course);
        }

        vector<int> indegree(N, 0);
        for(int i=0; i<N; i++) {
            for(auto it : adj[i])
                indegree[it]++;
        }

        queue<int> q;
        for(int i=0; i<N; i++) {
            if(indegree[i] == 0)
                q.push(i);
        }

        vector<int> topo;
        while(!q.empty()) {
            int node = q.front();
            q.pop();

            topo.push_back(node);
            for(int it : adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0)
                    q.push(it);
            }
        }
        if(topo.size() == N)
                return topo;
            
        return {};
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    cin.ignore();

    string s;
    getline(cin, s);

    vector<vector<int>> arr;
    vector<int> row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                arr.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    vector<int> ans = sol.findOrder(N, arr);

    cout << '[';
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i+1 != ans.size())
            cout << ',';
    }
    cout << ']';

    return 0;
}