/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
class Solution {
public:
    void dfs(int node, vector<vector<int>> &isConnected, vector<int> &vis) {
        vis[node] = 1;

        for(int neighb=0; neighb<isConnected.size(); neighb++) {
            if(isConnected[node][neighb] == 1 && !vis[neighb]) 
                dfs(neighb, isConnected, vis);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n, 0);
        int provinces = 0;

        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                provinces++;
                dfs(i, isConnected, vis);
            }
        }
        return provinces;
    }
};
// @lc code=end

