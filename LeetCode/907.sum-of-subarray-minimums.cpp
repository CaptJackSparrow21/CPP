/*
 * @lc app=leetcode id=907 lang=cpp
 *
 * [907] Sum of Subarray Minimums
 */

// @lc code=start
#define ll long long
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;

        vector<int> left(n), right(n);
        stack<int> st;

        for(int i=0; i<n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            if(st.empty()) left[i] = i+1;
            else left[i] = i - st.top();
            st.push(i);
        }

        while(!st.empty()) st.pop();
        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if(st.empty()) right[i] = n-i;
            else right[i] = st.top() - i;

            st.push(i);
        }
        ll ans = 0;

        for(int i=0; i<n; i++) {
            ll contribution = (ll) arr[i] * left[i] * right[i];
            ans = (ans + contribution) % MOD;
        }
        return ans;
    }
};
// @lc code=end

