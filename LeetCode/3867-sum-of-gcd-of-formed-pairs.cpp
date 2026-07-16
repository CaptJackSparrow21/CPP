class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> a;
        a.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++) {
            int x = max(nums[i], nums[i-1]);
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int l = 0, r = a.size() - 1;
        int ans = 0;
        while(l < r) {
            ans += gcd(a[l], a[r]);
            l++;
            r--;
        }
        return ans;
    }
};