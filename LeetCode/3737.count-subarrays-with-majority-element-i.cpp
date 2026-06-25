/*
 * @lc app=leetcode id=3737 lang=cpp
 *
 * [3737] Count Subarrays With Majority Element I
 */

// @lc code=start
#define ll long long
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        ll n = nums.size();
        ll ans = 0;

        for(ll l=0; l<n; l++) {
            ll targetCount = 0;

            for(ll r=l; r<n; r++) {
                if(nums[r] == target)
                    targetCount++;

                ll len = r - l + 1;
                if(targetCount > len / 2)
                    ans++;
            }
        }

        // ll n = nums.size();
        // ll offset = n + 2;
        // ll size = 2 * n + 5;

        // vector<ll> bit(size + 1, 0);

        // auto update = [&](ll idx) {
        //     while(idx <= size) {
        //         bit[idx]++;
        //         idx += idx & (-idx);
        //     }
        // };

        // auto query = [&](ll idx) {
        //     ll sum = 0;
        //     while(idx > 0) {
        //         sum += bit[idx];
        //         idx -= idx & (-idx);
        //     }
        //     return sum;
        // };

        // ll ans = 0;
        // ll preifx = 0;
        // update(offset);

        // for(ll x : nums) {
        //     if(x == target)
        //         prefix++;
        //     else 
        //         prefix--;

        //     ans += query(prefix + offset - 1);
        //     update(prefix + offset);
        // }
        return ans;
    }
};
// @lc code=end

