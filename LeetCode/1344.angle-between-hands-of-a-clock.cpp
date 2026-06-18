/*
 * @lc app=leetcode id=1344 lang=cpp
 *
 * [1344] Angle Between Hands of a Clock
 */

// @lc code=start
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minuteAngle = minutes * 6;
        double hourAngle = (hour % 12) * 30 + minutes * 0.5;
        double angle = abs(hourAngle - minuteAngle);
        return min(angle, 360.0 - angle);
    }
};
// @lc code=end

