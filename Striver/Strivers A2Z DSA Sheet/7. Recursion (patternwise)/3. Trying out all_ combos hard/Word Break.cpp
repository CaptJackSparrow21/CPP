//https://takeuforward.org/plus/dsa/problems/word-break

#include<bits/stdc++.h>
using namespace std;

//TC = O(n * L) : n = |s| & L = max. word length in dictionary
//SC = O(n)
class Solution {
public:
    bool wordBreak(string s, vector<string> &wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());

        int n = s.size();
        int maxLen = 0;
        for(const string &w : wordDict) {
            maxLen = max(maxLen, (int)w.size());
        }

        vector<int> dp(n+1, 0);
        dp[0] = 1;

        for(int i=1; i<=n; i++) {
            int start = max(0, i - maxLen);
            for(int j=i-1; j>=start; j--) {
                if(!dp[j]) continue;
                string sub = s.substr(j, i-j);
                if(dict.count(sub)) {
                    dp[i] = 1;
                    break;
                }
            }
        }
        return dp[n];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    cin.ignore();
    string word;
    getline(cin, word);

    vector<string> wordDict;

    stringstream ss(word);
    string temp;
    while(getline(ss, temp, ' ')) {
        if(!temp.empty()) {
            wordDict.push_back(temp);
        }
    }

    Solution sol;
    cout << boolalpha << sol.wordBreak(s, wordDict) << endl;
    
    return 0;
}