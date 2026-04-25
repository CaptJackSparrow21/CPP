/*
 * @lc app=leetcode id=846 lang=cpp
 *
 * [846] Hand of Straights
 */

// @lc code=start
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize != 0)
            return false;

        map<int, int> freq;
        for(int card : hand)
            freq[card]++;

        while(!freq.empty()) {
            int start = freq.begin()->first;
            for(int i=0; i<groupSize; i++) {
                if(freq[start + i] == 0)
                    return false;
        
                freq[start + i]--;
                if(freq[start + i] == 0)
                    freq.erase(start + i);
            }
        }
        return true;
    }
};
// @lc code=end

