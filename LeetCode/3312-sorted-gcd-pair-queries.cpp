#define ll long long
class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1);
        for(int x : nums)
            freq[x]++;

        vector<ll> cntG(mx + 1);
        for(int g = mx; g >= 1; g--) {
            ll cnt = 0;

            for(int j=g; j <= mx; j += g) {
                cnt += freq[j];
                cntG[g] -= cntG[j];
            }

            cntG[g] += cnt * (cnt - 1) / 2;
        }

        vector<ll> pref(mx + 1);

        for(int i=1; i<=mx; i++)
            pref[i] = pref[i-1] + cntG[i];

        vector<int> ans;

        for(ll q : queries)
            ans.push_back(upper_bound(pref.begin(), pref.end(), q) - pref.begin());

        return ans;
    }
};