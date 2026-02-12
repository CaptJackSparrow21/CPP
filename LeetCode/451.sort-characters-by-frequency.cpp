/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

#define uc unsigned char
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq; // (char, count)
        for(int i=0; i<s.size(); i++) {
            char c = s[i];
            freq[(uc)c]++;
        }

        vector<char> characters;
        characters.reserve(freq.size());
        for(auto &p : freq) {
            characters.push_back(p.first);
        }

        sort(characters.begin(), characters.end(), [&] (char a, char b) {
            return freq[(uc)a] > freq[(uc)b];
        });

        string ans;
        ans.reserve(s.size());
        for(char c : characters) {
            ans.append(freq[c], c);
        }

        return ans;
    }
};
// @lc code=end

