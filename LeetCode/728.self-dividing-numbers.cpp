/*
 * @lc app=leetcode id=728 lang=cpp
 *
 * [728] Self Dividing Numbers
 */

// @lc code=start
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++) {
            int tmp = i;
            bool ok = true;
            while(tmp > 0) {
                int d = tmp % 10;
                if(d == 0 || i % d != 0) {
                    ok = false;
                    break;
                }
                tmp /= 10;
            }
            if(ok) 
                ans.push_back(i);
        }
        return ans;
    }
};
// @lc code=end

