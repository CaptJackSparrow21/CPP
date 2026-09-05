//https://takeuforward.org/plus/dsa/problems/partition-equal-subset-sum?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * target) && SC = O(target)
class Solution {
public:
    bool equalPartition(int n, vector<int> arr) {
        int sum = 0;
        for(int x : arr)
            sum += x;
        if(sum % 2)
            return false;

        int target = sum / 2;

        vector<bool> dp(target + 1, false);
        dp[0] = true;

        for(int x : arr) {
            for(int j=target; j>=x; j--)
                dp[j] = dp[j] || dp[j-x];
        }

        return dp[target];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

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

    int n = arr.size();

    Solution sol;
    cout << ((sol.equalPartition(n, arr)) ? "True" : "False");

    return 0;
}