/*
 * @lc app=leetcode id=992 lang=cpp
 *
 * [992] Subarrays with K Different Integers
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostKDistinct(nums, k) - atMostKDistinct(nums, k-1);
    }

    int atMostKDistinct(vector<int> &nums, int k) {
        int left = 0, res = 0;
        unordered_map<int, int> freq;
        for(int right=0; right < nums.size(); right++) {
            freq[nums[right]]++;

            while(freq.size() > k) {
                freq[nums[left]]--;
                if(freq[nums[left]] == 0) freq.erase(nums[left]);
                left++;
            }
            res += (right - left + 1);
        }
        return res;
    }
};
// @lc code=end

