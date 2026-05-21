/*
 * @lc app=leetcode id=1175 lang=cpp
 *
 * [1175] Prime Arrangements
 */

// @lc code=start

class Solution {
public:
    const int mod = 1e9 + 7;

    int numPrimeArrangements(int n) {
        vector<bool> prime(n+1, true);
        prime[0] = prime[1] = false;
        for(int i=2; i<=n; i++) {
            if(prime[i]) {
                for(int j=i*i; j<=n; j+=i)
                    prime[j] = false;
            }
        }
        
        int cnt = 0;
        for(int i=2; i<=n; i++) 
            if(prime[i])
                cnt++;

        long long ans = 1;
        for(int i=2; i<=cnt; i++)
            ans = ans * i % mod;

        for(int i=2; i<=n-cnt; i++)
            ans = ans * i % mod;

        return ans;
    }
};
// @lc code=end

