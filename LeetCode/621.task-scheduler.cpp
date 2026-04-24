/*
 * @lc app=leetcode id=621 lang=cpp
 *
 * [621] Task Scheduler
 */

// @lc code=start
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {};
        for(char c : tasks)
            freq[c - 'A']++;
        int maxFreq = *max_element(freq, freq+26);
        int cntMax = count(freq, freq+26, maxFreq);
        return max((int) tasks.size(), (maxFreq-1) * (n+1) + cntMax);
    }
};
// @lc code=end

