/*
 * @lc app=leetcode id=126 lang=cpp
 *
 * [126] Word Ladder II
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<vector<string>> q;
        q.push({beginWord});
        vector<vector<string>> ans;
        vector<string> usedOnLevel;
        usedOnLevel.push_back(beginWord);
        int level = 0;
        while(!q.empty()) {
            vector<string> path = q.front();
            q.pop();

            if(path.size() > level) {
                level = path.size();

                for(auto &it : usedOnLevel)
                    st.erase(it);

                usedOnLevel.clear();
            }

            string word = path.back();
            if(word == endWord) {
                if(ans.empty())
                    ans.push_back(path);
                else if(ans[0].size() == path.size())
                    ans.push_back(path);

                continue;
            }

            for(int i=0; i<word.size(); i++) {
                char org = word[i];
                for(char c = 'a'; c <= 'z'; c++) {
                    word[i] = c;
                    if(st.count(word)) {
                        path.push_back(word);
                        q.push(path);
                        usedOnLevel.push_back(word);
                        path.pop_back();
                    }
                }
                word[i] = org;
            }
        }
        return ans;
    }
};
// @lc code=end

