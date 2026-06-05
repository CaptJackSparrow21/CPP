/*
 * @lc app=leetcode id=3753 lang=cpp
 *
 * [3753] Total Waviness of Numbers in Range II
 */

// @lc code=start
#define ll long long
class Solution {
    static inline int waves[570];
        static inline bool init = []() {
            int j=0;
            for(int i=0; i<1000; i++) {
                int r = i % 10;
                int m = (i / 10) % 10;
                int l = (i / 100) % 10;
                if((m > max(l, r)) | (m < min(l, r)))
                    waves[j++] = i;
            }
            return 0;
        } ();

public:
    long long totalWaviness(long long num1, long long num2) {
        return waveCount(num2) - waveCount(num1 - 1);
}

private :
        ll waveCount(ll num) {
            if(num < 100)
                return 0;
            
            ll res = 0;
            for(auto &p : waves)
                res += countWays(num, p);

            return res;
        }

        ll countWays(ll num, int pattern) {
            ll type = pattern < 100;
            ll count = 0, mult = 1;

            for(int i=0; i<16; i++) {
                if(mult * 100 > num)
                    break;

                ll pre = num / (mult * 1000);
                ll curr = (num / mult) % 1000;
                ll suf = num % mult;

                ll ways = 0, edge = 0;

                if(curr > pattern)
                    ways = pre - type + 1;
                else if(curr == pattern) {
                    ways = max(0LL, pre - type);
                    edge = (pre >= type) * (suf + 1);
                }
                else if(curr < pattern)
                    ways = max(0LL, pre - type);

                count += ways * mult + edge;
                mult *= 10;
            }
        return count;
    }
};
// @lc code=end

