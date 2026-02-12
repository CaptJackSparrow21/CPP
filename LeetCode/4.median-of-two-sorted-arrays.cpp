/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = (int) nums1.size();
        int n2 = (int) nums2.size();

        if(n1 > n2) {
            swap(nums1, nums2);
            swap(n1, n2);
        }

        int low = 0, high = n1;
        int total = n1 + n2;

        while(low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = (total + 1) / 2 - cut1;

            int left1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
            int right1 = (cut1 == n1) ? INT_MAX : nums1[cut1];

            int left2 = (cut2 == 0) ? INT_MIN : nums2[cut2 -1];
            int right2 = (cut2 == n2) ? INT_MAX : nums2[cut2];

            if(left1 <= right2 && left2 <= right1) {
                if(total % 2 == 0) {
                    int mx = max(left1, left2);
                    int mn = min(right1, right2);
                    return (mx + mn) / 2.0;
                }
                else {
                    return (double) max(left1, left2);
                }
            }
            else if(left1 > right2) {
                high = cut1 - 1;
            }
            else {
                low = cut1 + 1;
            }
        }
        return 0.0;
    }
};
// @lc code=end

