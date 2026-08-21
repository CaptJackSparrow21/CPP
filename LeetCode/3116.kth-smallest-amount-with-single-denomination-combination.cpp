/*
 * @lc app=leetcode id=3116 lang=cpp
 *
 * [3116] Kth Smallest Amount With Single Denomination Combination
 */

// @lc code=start
class Solution {
public:
#define ll long long

    ll count(ll x, vector<int> &coins) {
        int n = coins.size();
        ll ans = 0;

        for(int mask=1; mask < (1 << n); mask++) {
            ll lcm = 1;
            int bits = 0;

            for(int i=0; i<n; i++) {
                if(mask & (1 << i)) {
                    bits++;
                    ll g = gcd(lcm, (ll)coins[i]);

                    if(lcm > x / (coins[i] / g)) {
                        lcm = x + 1;
                        break;
                    }

                    lcm = lcm / g * coins[i];
                }
            }

            if(lcm <= x) {
                if(bits & 1)
                    ans += x / lcm;
                else
                    ans -= x / lcm; 
            }
        }
        return ans;
    }

    long long findKthSmallest(vector<int>& coins, int k) {
        ll low = 1, high = 1LL * (*min_element(coins.begin(), coins.end())) * k;

        while(low < high) {
            ll mid = low + (high - low) / 2;
            if(count(mid, coins) >= k)
                high = mid;
            else    
                low = mid + 1;
        }
        return low;
    }
};
// @lc code=end

