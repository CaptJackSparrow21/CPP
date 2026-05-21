/*
 * @lc app=leetcode id=1185 lang=cpp
 *
 * [1185] Day of the Week
 */

// @lc code=start
class Solution {
public:
    bool leap(int y) {
        return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
    }

    string dayOfTheWeek(int day, int month, int year) {
       vector<string> week = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday"
       };

       vector<int> days = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
       };
       
       int total = 4;

       for(int y=1971; y<year; y++) {
        total += leap(y) ? 366 : 365;
       }

       for(int m=1; m<month; m++) {
        total += days[m-1];
        if(m == 2 && leap(year))
            total++;
       }

       total += day;

       return week[total % 7];
    }
};
// @lc code=end

