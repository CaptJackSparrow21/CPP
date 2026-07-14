//https://takeuforward.org/plus/dsa/problems/course-schedule-i?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(N + E) && SC = O(N)
class Solution {
public:
    bool canFinish(int N, vector<vector<int>> arr) {
        vector<int> adj[N];

        for(auto it : arr) {
            int course = it[0];
            int pre = it[1];

            adj[pre].push_back(course);
        }

        vector<int> indegree(N, 0);
        for(int i=0; i<N; i++) {
            for(int it : adj[i])
                indegree[it]++''
        }
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    cin.ignore();

    vector<vector<int>> arr;

    return 0;
}