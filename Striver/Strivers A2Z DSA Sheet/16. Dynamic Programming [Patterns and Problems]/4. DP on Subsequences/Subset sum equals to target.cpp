//https://takeuforward.org/plus/dsa/problems/subset-sum-equals-to-target?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n * s); 
class Solution {
public:
    bool isSubsetSum(vector<int> arr, int target) {
        int n = arr.size();
        vector<vector<bool>> dp(n+1, vector<bool> (target+1, false));

        for(int i=0; i<=n; i++)
            dp[i][0] = true;

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=target; j++) {
                dp[i][j] = dp[i-1][j];
                if(arr[i-1] <= j)
                    dp[i][j] = dp[i][j] || dp[i-1][j-arr[i-1]];
            }
        }
        return dp[n][target];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; 
    getline(cin, s);
    int target; cin >> target;

    vector<int> arr;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            arr.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << ((sol.isSubsetSum(arr, target)) ? "True" : "False");

    return 0;
}