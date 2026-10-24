/*
 * @lc app=leetcode id=2409 lang=cpp
 *
 * [2409] Count Days Spent Together
 */

// @lc code=start
class Solution {
public:
    int toDay(string date) {
        int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));

        for(int i=1; i<month; i++)
            day += days[i];

        return day;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int start = max(toDay(arriveAlice), toDay(arriveBob));
        int end = min(toDay(leaveAlice), toDay(leaveBob));
        return max(0, end - start + 1);
    }
};
// @lc code=end

