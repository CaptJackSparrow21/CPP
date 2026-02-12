/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

//Manual Parsing :- For large string manual parsing is faster
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int i=0, n = s.length();

        while(i < n) {
            while(i < n && s[i] == ' ') i++;
            if(i >= n) break;
            int start = i;
            while(i < n && s[i] != ' ') i++;
            string a = s.substr(start, i-start);
            words.push_back(a);
        }
        reverse(words.begin(), words.end());
        string result;
        for(int i=0; i<words.size(); i++) {
            if(i > 0) result += " ";
            result += words[i];
        }
        return result;
    }
};

// class Solution {
// public:
//     string reverseWords(string s) {
//         vector<string> words;
//         stringstream ss(s);
//         string a;

//         while(ss >> a) {
//             words.push_back(a);
//         }

//         reverse(words.begin(), words.end());
//         string result;
//         for(int i=0; i<words.size(); i++) {
//             if(i>0) result += " ";
//             result += words[i];
//         }
//         return result;
//     } 
// };

// @lc code=end

