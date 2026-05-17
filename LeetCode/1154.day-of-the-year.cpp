/*
 * @lc app=leetcode id=1154 lang=cpp
 *
 * [1154] Day of the Year
 */

// @lc code=start
class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        vector<int> days = 
        {31, 28, 31, 30, 31, 30 ,31, 31, 30, 31, 30, 31};

        bool leap = false;
        if(year % 400 == 0 ||
           (year % 4 == 0 && year % 100 != 0))
           leap = true; 

        if(leap)
            days[1] = 29;
        
        int ans = 0;

        for(int i=0; i<month - 1; i++) 
            ans += days[i];

        ans += day;

        return ans;
    }
};
// @lc code=end

