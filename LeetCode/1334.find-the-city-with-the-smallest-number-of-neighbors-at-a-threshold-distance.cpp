/*
 * @lc app=leetcode id=1334 lang=cpp
 *
 * [1334] Find the City With the Smallest Number of Neighbors at a Threshold Distance
 */

// @lc code=start
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        const int inf = 1e9;
        vector<vector<int>> dist(n, vector<int> (n, inf));

        for(int i=0; i<n; i++)
            dist[i][i] = 0;

        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];
            int w = e[2];

            dist[u][v] = w;
            dist[v][u] = w;
        }

        for(int k=0; k<n; k++) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(dist[i][k] != inf && 
                       dist[k][j] != inf) {
                        dist[i][j] = min(dist[i][j],
                                    dist[i][k] + dist[k][j]);
                    }
                }
            }
        }
        int city = -1;
        int minCount = INT_MAX;

        for(int i=0; i<n; i++) {
            int cnt = 0;
            for(int j=0; j<n; j++) {
                if(dist[i][j] <= distanceThreshold)
                    cnt++;
            }

            if(cnt <= minCount) {
                minCount = cnt;
                city = i;
            }
        }
        return city;
    }
};
// @lc code=end

