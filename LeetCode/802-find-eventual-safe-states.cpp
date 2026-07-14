class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size();
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
        }
    }
};