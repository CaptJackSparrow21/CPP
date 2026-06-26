//https://takeuforward.org/plus/dsa/problems/word-ladder-ii?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(N × L × 26) && SC = O(N × L)
// N = number of words
// L = length of each word
class Solution {
    public:
        vector<vector<string>> findSequences(string beginWord, string endWord, vector<string> &wordList) {
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

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string beginWord, endWord;
    cin >> beginWord >> endWord;
    cin.ignore();

    vector<string> wordList;
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    while(ss >> word)
        wordList.push_back(word);

    Solution sol;
    vector<vector<string>> ans = sol.findSequences(beginWord, endWord, wordList);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j];
            if(j+1 != ans[i].size())
                cout << ",";
        }
        cout << "]";
        if(i+1 != ans.size())
            cout << ",";
    }
    cout << "]";

    return 0;
}