//https://takeuforward.org/practice/dsa/largest-divisible-subset

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n^2) && O(n)
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int> nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> dp(n, 1), parent(n, -1);
        int best = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                if(nums[i] % nums[j] == 0 && 
                    dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        parent[i] = j;
                }
            }

            if(dp[i] > dp[best])
                best = i;
        }
        vector<int> ans;
        while(best != -1) {
            ans.push_back(nums[best]);
            best = parent[best];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<int> nums;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            nums.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    vector<int> ans = sol.largestDivisibleSubset(nums);
    cout << '[';
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << (i + 1 < ans.size() ? "," : "");
    }
    cout << ']';

    return 0;
}