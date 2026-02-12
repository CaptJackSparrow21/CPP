//https://takeuforward.org/plus/dsa/problems/check-if-there-exists-a-subsequence-with-sum-k

#include<bits/stdc++.h>
using namespace std;

//TC = O(n * k) & SC = O(k)
class Solution {
public:
    bool checkSubSequenceSum(vector<int> &nums, int k) {
        int n = nums.size();
        vector<int> dp(k+1, 0);
        dp[0] = 1;
        for(int i=0; i<n; i++) {
            int x = nums[i];
            for(int s=k; s>=x; s--) {
                if(dp[s-x]) dp[s] = 1;
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
    cout << boolalpha << sol.checkSubSequenceSum(nums, k) << endl;

    return 0;
}