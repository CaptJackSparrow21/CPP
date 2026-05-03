//https://takeuforward.org/plus/dsa/problems/maximum-sum-combination?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n + k log k) && SC = O(k)
class Solution { 
public:
    vector<int> maxSumCombinations(vector<int> &nums1, 
                                    vector<int> &nums2, int k) {
        int n = nums1.size();

        sort(nums1.rbegin(), nums1.rend());
        sort(nums2.rbegin(), nums2.rend());
                                        
        priority_queue<pair<int, pair<int, int>>> pq;

        set<pair<int, int>> vis;

        pq.push({nums1[0] + nums2[0], {0,0}});
        vis.insert({0,0});

        vector<int> ans;

        while(k--) {
            auto top = pq.top();
            pq.pop();

            int sum = top.first;
            int i = top.second.first;
            int j = top.second.second;

            ans.push_back(sum);

            //(i+1, j)
            if(i+1 < n && !vis.count({i+1, j})) {
                pq.push({nums1[i+1] + nums2[j], {i+1, j}});
                vis.insert({i+1, j});
            }

            //(i, j+1)
            if(j+1 < n && !vis.count({i, j+1})) {
                pq.push({nums1[i] + nums2[j+1], {i, j+1}});
                vis.insert({i, j+1});
            }
        }
        return ans;
    }
};  

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int k; cin >> k;

    s1.erase(remove(s1.begin(), s1.end(), '['), s1.end());
    s1.erase(remove(s1.begin(), s1.end(), ']'), s1.end());

    s2.erase(remove(s2.begin(), s2.end(), '['), s2.end());
    s2.erase(remove(s2.begin(), s2.end(), ']'), s2.end());

    stringstream ss1(s1);
    string temp1;
    vector<int> nums1;
    while(getline(ss1, temp1, ',')) {
        if(!temp1.empty())
            nums1.push_back(stoi(temp1));
    }

    stringstream ss2(s2);
    string temp2;
    vector<int> nums2;
    while(getline(ss2, temp2, ',')) {
        if(!temp2.empty())
            nums2.push_back(stoi(temp2));
    }

    Solution sol;
    vector<int> ans = sol.maxSumCombinations(nums1, nums2, k);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ","); 
    }
    cout << "]";

    return 0;
}