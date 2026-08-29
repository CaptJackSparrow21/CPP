/*
 * @lc app=leetcode id=134 lang=cpp
 *
 * [134] Gas Station
 */

// @lc code=start
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0, tank = 0, start = 0;

        for(int i=0; i<gas.size(); i++) {
            total += gas[i] - cost[i];
            tank += gas[i] - cost[i];

            if(tank < 0) {
                start = i + 1;
                tank = 0;
            }
        }
        return total >= 0 ? start : -1; 
    }
};
// @lc code=end

