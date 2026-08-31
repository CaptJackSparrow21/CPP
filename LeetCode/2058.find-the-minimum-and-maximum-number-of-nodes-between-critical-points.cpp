/*
 * @lc app=leetcode id=2058 lang=cpp
 *
 * [2058] Find the Minimum and Maximum Number of Nodes Between Critical Points
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> nums;

        while(head) {
            nums.push_back(head->val);
            head = head->next;
        }

        vector<int> critical_points;
        int n = nums.size();

        for(int i=1; i<n-1; i++) {
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
                critical_points.push_back(i);
            else if(nums[i] < nums[i-1] && nums[i] < nums[i+1])
                critical_points.push_back(i);
        }

        int m = critical_points.size();
        if(m < 2) 
            return {-1, -1};
        
        int minDist = INT_MAX;
        int maxDist = critical_points[m-1] - critical_points[0];

        for(int i=1; i<m; i++) {
            minDist = min(minDist, critical_points[i] - critical_points[i-1]);
        }

        return {minDist, maxDist};
    }
};
// @lc code=end

