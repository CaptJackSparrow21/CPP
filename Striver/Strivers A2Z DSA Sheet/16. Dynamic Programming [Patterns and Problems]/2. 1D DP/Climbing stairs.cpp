//https://takeuforward.org/plus/dsa/problems/climbing-stairs?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int climbStairs(int n) {
        int prev2 = 1, prev1 = 1;

        for(int i=2; i<=n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    Solution sol;
    cout << sol.climbStairs(n);

    return 0;
}