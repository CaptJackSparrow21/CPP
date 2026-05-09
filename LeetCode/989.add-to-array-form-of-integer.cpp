/*
 * @lc app=leetcode id=989 lang=cpp
 *
 * [989] Add to Array-Form of Integer
 */

// @lc code=start
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        vector<int> ans;

        int i = n - 1;
        int carry = 0;
        while(i >= 0 || k > 0 || carry) {
            int sum = carry;

            if(i >= 0) {
                sum += num[i];
                i--;
            }

            if(k > 0) {
                sum += k % 10;
                k /= 10;
            }
            
            ans.push_back(sum % 10);
            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

