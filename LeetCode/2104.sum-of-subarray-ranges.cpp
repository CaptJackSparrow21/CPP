/*
 * @lc app=leetcode id=2104 lang=cpp
 *
 * [2104] Sum of Subarray Ranges
 */

// @lc code=start
//Answer=∑(Contribution as Max)−∑(Contribution as Min)
#define ll long long
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n), pge(n), nse(n), pse(n);
        stack<int> st;

        //next greater
        while(!st.empty()) st.pop();
        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && nums[st.top()] <= nums[i]) st.pop();
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        //previous greater
        while(!st.empty()) st.pop();
        for(int i=0; i<n; i++) {
            while(!st.empty() && nums[st.top()] < nums[i]) st.pop();
            pge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        //next smaller
        while(!st.empty()) st.pop();
        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && nums[st.top()] >= nums[i]) st.pop();
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        //previous smaller
        while(!st.empty()) st.pop();
        for(int i=0; i<n; i++) {
            while(!st.empty() && nums[st.top()] > nums[i]) st.pop();
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        ll maxSum = 0, minSum = 0;

        for(int i=0; i<n; i++) {
            ll left = i - pge[i];
            ll right = nge[i] - i;
            maxSum += nums[i] * left * right;
        }
        for(int i=0; i<n; i++) {
            ll left = i - pse[i];
            ll right = nse[i] - i;
            minSum += nums[i] * left * right;
        }

        return maxSum - minSum;
    }
};
// @lc code=end

