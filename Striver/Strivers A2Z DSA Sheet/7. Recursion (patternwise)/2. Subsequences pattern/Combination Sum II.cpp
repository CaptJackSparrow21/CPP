//https://takeuforward.org/plus/dsa/problems/combination-sum-ii

#include<bits/stdc++.h>
using namespace std;

//TC = O(2^n) & SC = O(n)
class Solution {
    void dfs(int idx, int sum, int target, vector<int> &a,
                vector<int> &curr, vector<vector<int>> &ans) {
        if(sum == target) {
            ans.push_back(curr);
            return;
        }

        for(int i=idx; i<a.size(); i++) {
            if(i > idx &&  a[i] == a[i-1]) continue;
            if(sum + a[i] > target) break;
            curr.push_back(a[i]);
            dfs(i+1, sum + a[i], target, a, curr, ans);
            curr.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target){
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(0, 0, target, candidates, curr, ans);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);
    int target; cin >> target;

    line.erase(remove(line.begin(), line.end(), '['), line.end());
    line.erase(remove(line.begin(), line.end(), ']'), line.end());

    stringstream ss(line);
    string temp;
    vector<int> candidates;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            candidates.push_back(stoi(temp));
        }
    }

    Solution sol;
    vector<vector<int>> ans = sol.combinationSum2(candidates, target);
    
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