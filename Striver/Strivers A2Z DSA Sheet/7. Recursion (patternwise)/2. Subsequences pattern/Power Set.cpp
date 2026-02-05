//https://takeuforward.org/plus/dsa/problems/power-set

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(n * 2^n)
class Solution{
public:
    vector<vector<int>> powerSet(vector<int> &nums) {
        int n = nums.size();
        int total = 1 << n;

        vector<vector<int>> ans;
        ans.reserve(total);

        for(int i=0; i<total; i++) {
            vector<int> curr;
            for(int j=0; j<n; j++) {
                if(i & (1 << j)) {
                    curr.push_back(nums[j]);
                }
            }
            ans.push_back(curr);
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    string temp;
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        nums.push_back(stoi(temp));
    }

    Solution sol;
    vector<vector<int>> ans = sol.powerSet(nums);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j];
            if(j + 1 < ans[i].size()) cout << ",";
        }
        cout << "]";
        if(i + 1 < ans.size()) cout << ",";
    }
    cout << "]";

    return 0;
}