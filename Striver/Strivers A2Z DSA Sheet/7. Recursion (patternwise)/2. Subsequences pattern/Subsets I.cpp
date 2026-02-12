//https://takeuforward.org/plus/dsa/problems/subsets-i

#include<bits/stdc++.h>
using namespace std;

//TC = O(2^n) & SC = O(2^n)
class Solution{
    void dfs(int idx, int currSum, 
            vector<int> &nums, vector<int> &ans) {
        if(idx == nums.size()) {
            ans.push_back(currSum);
            return;
        }

        //visualization - full binary tree
        dfs(idx+1, currSum, nums, ans);
        dfs(idx+1, currSum + nums[idx], nums, ans);
    }

public:
    vector<int> subsetSums(vector<int> &nums) {
        vector<int> ans;
        dfs(0, 0, nums, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);
    
    line.erase(remove(line.begin(), line.end(), '['), line.end());
    line.erase(remove(line.begin(), line.end(), ']'), line.end());

    stringstream ss(line);
    vector<int> nums;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    Solution sol;
    vector<int> ans = sol.subsetSums(nums);
    
    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1 == ans.size()) ? "" : ",");
    }
    cout << "]";

    return 0;
}