/*
 * @lc app=leetcode id=3731 lang=cpp
 *
 * [3731] Find Missing Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> arr = nums;
        int mx = *max_element(arr.begin(), arr.end());
        int mn = *min_element(arr.begin(), arr.end());
        //sort(arr.begin(), arr.end());

        vector<int> ans;
        for(int i=mn; i<=mx; i++) {
            auto it = find(arr.begin(), arr.end(), i);
            if(it == arr.end())
                ans.push_back(i);
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

