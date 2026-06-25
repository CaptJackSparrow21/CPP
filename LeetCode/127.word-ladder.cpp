/*
 * @lc app=leetcode id=127 lang=cpp
 *
 * [127] Word Ladder
 */

// @lc code=start
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<pair<string, int>> q;
        q.push({beginWord, 1});

        while(!q.empty()) {
            auto [word, steps] = q.front();
            q.pop();

            if(word == endWord)
                return steps;

            for(int i=0; i<word.size(); i++) {
                char org = word[i];

                for(char c = 'a'; c <= 'z'; c++) {
                    word[i] = c;
                    if(st.count(word)) {
                        q.push({word, steps + 1});
                        st.erase(word);
                    }
                }
                word[i] = org;
            }
        }
        return 0;
    }
};
// @lc code=end

