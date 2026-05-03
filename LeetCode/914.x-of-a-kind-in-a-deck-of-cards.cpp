/*
 * @lc app=leetcode id=914 lang=cpp
 *
 * [914] X of a Kind in a Deck of Cards
 */

// @lc code=start
class Solution {
public:
    int gcd(int a, int b) {
        return (b == 0) ? a : gcd(b, a % b);
    }

    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> freq;

        for(int x : deck)
            freq[x]++;

        int g = 0;
        for(auto it : freq) {
            g = gcd(g, it.second);
        }

        return g >= 2;
    }
};
// @lc code=end

