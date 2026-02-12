//https://takeuforward.org/plus/dsa/problems/subsets-ii

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(n * 2^n)
class Solution{
    void dfs(int idx, vector<int> &nums, 
            vector<int> &curr, vector<vector<int>> &ans) {
        ans.push_back(curr);
        for(int i=idx; i<nums.size(); i++) {
            if(i > idx && nums[i] == nums[i-1]) continue;
            curr.push_back(nums[i]);
            dfs(i+1, nums, curr, ans);
            curr.pop_back();
        }
    }

public:
    vector<vector<int>> subsetWithDup(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(0, nums, curr, ans);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    string temp;
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    Solution sol;
    vector<vector<int>> ans = sol.subsetWithDup(nums);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j];
            cout << ((j+1 == ans[i].size()) ? "" : ",");
        }
        cout << "]";
        cout << ((i+1 == ans.size()) ? "" : ",");
    }
    cout << "]";

    return 0;
}