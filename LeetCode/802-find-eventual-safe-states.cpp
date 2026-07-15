class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<vector<int>> adj = graph;
        vector<int> revAdj[v];
        vector<int> outdegree(v, 0);

        for(int i=0; i<v; i++) {
            outdegree[i] = adj[i].size();

            for(auto it : adj[i])
                revAdj[it].push_back(i);
        }

        queue<int> q;
        for(int i=0; i<v; i++) {
            if(outdegree[i] == 0)
                q.push(i);
        }

        vector<int> ans;
        while(!q.empty()) {
            int node = q.front();
            q.pop();

            ans.push_back(node);
            for(auto parent : revAdj[node]) {
                outdegree[parent]--;

                if(outdegree[parent] == 0)
                    q.push(parent);
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};