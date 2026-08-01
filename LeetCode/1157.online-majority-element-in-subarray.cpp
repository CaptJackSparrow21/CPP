/*
 * @lc app=leetcode id=1157 lang=cpp
 *
 * [1157] Online Majority Element In Subarray
 */

// @lc code=start
class MajorityChecker {
public:
    unordered_map<int, vector<int>> mp;
    vector<int> temp;

    MajorityChecker(vector<int>& arr) {
        for(int i=0; i<arr.size(); i++)
            mp[arr[i]].push_back(i);
        temp = arr;
    }
    
    int query(int left, int right, int threshold) {
        int len = right - left + 1;
        for(int i=0; i<100; i++) {
            int x = temp[left + rand() % len];
            int cnt = upper_bound(mp[x].begin(), mp[x].end(), right)
                     - lower_bound(mp[x].begin(), mp[x].end(), left);
            if(cnt >= threshold)
                return x;
        }
        return -1;
    }
};

/**
 * Your MajorityChecker object will be instantiated and called as such:
 * MajorityChecker* obj = new MajorityChecker(arr);
 * int param_1 = obj->query(left,right,threshold);
 */
// @lc code=end

