//https://takeuforward.org/plus/dsa/problems/count-all-subsequences-with-sum-k

#include<bits/stdc++.h>
using namespace std;

//TC = O(n*k) & SC = O(k)
class Solution {
public:
    int countSubsequenceWithTargetSum(vector<int> nums, int k) {
        vector<int> dp(k+1, 0);
        dp[0] = 1;

        for(int x : nums) {
            for(int sum=k; sum >= x; sum--) {
                dp[sum] += dp[sum - x];
            }
        }
        return dp[k];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);
    int k; cin >> k;

    line.erase(remove(line.begin(), line.end(), '['), line.end());
    line.erase(remove(line.begin(), line.end(), ']'), line.end());

    stringstream ss(line);
    string temp;
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    Solution sol;
    cout << sol.countSubsequenceWithTargetSum(nums, k) << endl;

    return 0;
}