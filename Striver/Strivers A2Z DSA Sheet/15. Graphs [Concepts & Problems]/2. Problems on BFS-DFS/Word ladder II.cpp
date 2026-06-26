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
        q.push({begn})
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
            cout << "\"" << ans[i][j] << "\"";
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