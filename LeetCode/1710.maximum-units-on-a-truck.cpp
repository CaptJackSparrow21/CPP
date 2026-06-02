/*
 * @lc app=leetcode id=1710 lang=cpp
 *
 * [1710] Maximum Units on a Truck
 */

// @lc code=start
#define ll long long
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), 
            [] (const vector<int> &a, const vector<int> &b) {
                    return a[1] > b[1];
            });

        ll ans = 0;

        for(auto &box : boxTypes) {
            int boxes = box[0];
            int units = box[1];

            int take = min(boxes, truckSize);
            ans += 1LL * take * units;
            truckSize -= take;

            if(truckSize == 0)
                break;
        }
        return (int)ans;
    }
};
// @lc code=end

