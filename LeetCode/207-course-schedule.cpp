class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<int> adj[n];
        for(auto it : prerequisites) {
            int course = it[0];
            int pre = it[1];

            adj[pre].push_back(course);
        }

        vector<int> indegree(n, 0);
        for(int i=0; i<n; i++) {
            for(int it : adj[i])
                indegree[it]++;
        }

        queue<int> q;
        for(int i=0; i<n; i++) {
            if(indegree[i] == 0)
                q.push(i);
        }

        int count = 0;
        while(!q.empty()) {
            int node = q.front();
            q.pop();

            count++;

            for(int it : adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0)
                    q.push(it);
            }
        }
        return count == n;
    }
};