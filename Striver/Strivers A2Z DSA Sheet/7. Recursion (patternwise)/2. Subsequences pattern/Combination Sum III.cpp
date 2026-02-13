//https://takeuforward.org/plus/dsa/problems/combination-sum-iii

#include<bits/stdc++.h>
using namespace std;

//O(C(9,k)) || 9cK && SC = O(k)
class Solution{
public:
    vector<vector<int>> ans;
    vector<int> combo;

    void backtrack(int start, int k, int target) {
        if(combo.size() == k && target == 0) {
            ans.push_back(combo);
            return;
        }

        if(combo.size() > k || target < 0) return;

        for(int num=start; num<=9; num++) {
            combo.push_back(num);
            backtrack(num+1, k, target-num);
            combo.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(1, k, n);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n;
    cin >> k >> n;

    Solution sol;
    vector<vector<int>> ans = sol.combinationSum3(k, n);
    
    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j];
            cout << ((j+1) == ans[i].size() ? "" : ",");
        }
        cout << "]";
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}