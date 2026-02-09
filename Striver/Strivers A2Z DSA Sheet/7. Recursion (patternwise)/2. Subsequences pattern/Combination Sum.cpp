//https://takeuforward.org/plus/dsa/problems/combination-sum

#include<bits/stdc++.h>
using namespace std;

//TC = O(2^n) || O(B^L) 
//B-> branching factor
//L->max length of one combination
//SC = O(L)

class Solution{
    void dfs(int i, int target, vector<int> &candidates,
            vector<int> &curr, vector<vector<int>> &ans) {
        if(target == 0) {
            ans.push_back(curr);
            return;
        }

        if(i == (int)candidates.size() || target < 0) return;

        curr.push_back(candidates[i]);
        dfs(i, target - candidates[i], candidates, curr, ans);
        curr.pop_back();

        dfs(i + 1, target, candidates, curr, ans);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(0, target, candidates, curr, ans);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);
    int target; cin >> target;  

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    string temp;
    vector<int> candidates;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()){
            candidates.push_back(stoi(temp));
        }
    }

    Solution sol;
    vector<vector<int>> ans = sol.combinationSum(candidates, target);

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