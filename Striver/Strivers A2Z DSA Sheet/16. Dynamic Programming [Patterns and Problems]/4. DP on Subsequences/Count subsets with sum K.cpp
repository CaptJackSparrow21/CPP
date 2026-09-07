//https://takeuforward.org/plus/dsa/problems/count-subsets-with-sum-k?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * k) && SC = O(k)
class Solution {
public:
    int perfectSum(vector<int> &arr, int K) {
        const int mod = 1e9 + 7;
        vector<int> dp(K+1, 0);
        dp[0] = 1;

        for(int x : arr) {
            for(int s=K; s>=x; s--)
                dp[s] = (dp[s] + dp[s-x]) % mod;
        }
        return dp[K];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; 
    getline(cin, s);
    int K; cin >> K;

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
    cout << sol.perfectSum(arr, K);

    return 0;
}