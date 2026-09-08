//https://takeuforward.org/plus/dsa/problems/count-partitions-with-given-difference?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * target) && SC = O(target)
class Solution {
public:
    int countPartitions(int n, int diff, vector<int> &arr) {
        const int mod = 1e9 + 7;
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if(sum < diff || (sum + diff) % 2)
            return 0;

        int target = (sum + diff) / 2;
        vector<int> dp(target + 1);
        dp[0] = 1;
        for(int x : arr) {
            for(int s=target; s>=x; s--)
                dp[s] = (dp[s] + dp[s-x]) % mod;
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
    int diff; cin >> diff;  

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
    cout << sol.countPartitions(n, diff, arr);

    return 0;
}