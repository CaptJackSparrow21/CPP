//https://takeuforward.org/plus/dsa/problems/partition-a-set-into-two-subsets-with-minimum-absolute-sum-difference?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * target) && SC = O(target)
class Solution {
public:
    int minDifference(vector<int> &arr, int n) {
        int total = accumulate(arr.begin(), arr.end(), 0);
        vector<bool> dp(total + 1, false);
        dp[0] = true;

        for(int x : arr) {
            for(int s = total; s >= x; s--)
                dp[s] = dp[s] || dp[s - x];
        }

        for(int s=total/2; s>=0; s--) {
            if(dp[s])
                return total - 2 * s;
        }
        return total;
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
    cout << sol.minDifference(arr, n);

    return 0;
}