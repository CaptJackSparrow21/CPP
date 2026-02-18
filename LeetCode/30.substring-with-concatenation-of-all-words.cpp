/*
 * @lc app=leetcode id=30 lang=cpp
 *
 * [30] Substring with Concatenation of All Words
 */

// @lc code=start
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        if(words.empty()) return ans;
        int wordLen = words[0].size(), numWords = words.size(), 
            totalLen = numWords * wordLen;
        if(s.size() < totalLen) return ans;

        unordered_map<string, int> freq;
        for(auto &w : words) freq[w]++;
        
        for(int i=0; i<wordLen; i++) {
            unordered_map<string, int> seen;
            int left = i, formed = 0;
            for(int j=i; j<=s.size()-wordLen; j+=wordLen) {
                string sub = s.substr(j, wordLen);
                if(freq.count(sub)) {
                    seen[sub]++;
                    if(seen[sub] <= freq[sub]) formed++;
                    while(formed == numWords && left <= j) {
                        if(j - left + wordLen == totalLen)
                            ans.push_back(left);
                        string prev = s.substr(left, wordLen);
                        left += wordLen;
                        if(freq.count(prev)) {
                            seen[prev]--;
                            if(seen[prev] < freq[prev]) formed--;
                        }
                    }
                }
                else {
                    seen.clear();
                    left = j + wordLen;
                    formed = 0;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

