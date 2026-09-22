//https://takeuforward.org/practice/dsa/longest-string-chain

#include<bits/stdc++.h>
using namespace std;
#define int long long

// n -> no. of words && l -> max. word length
//TC = O(n * l^2) && SC = O(n * l)
class Solution {
public:
    int longestStringChain(vector<string> &words) {
        sort(words.begin(), words.end(), 
            [](string &a, string &b) {
                return a.size() < b.size();
            });

        unordered_map<string, int> dp;
        int ans = 1;
        for(string &word : words) {
            dp[word] = 1;
            for(int i=0; i<word.size(); i++) {
                string prev = word.substr(0, i) + 
                              word.substr(i + 1);

                if(dp.count(prev))
                    dp[word] = max(dp[word] ,dp[prev] + 1);
            }
            ans = max(ans, dp[word]);
        }
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<string> words;
    string temp;
    for(char c : s) {
        if(isalnum(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            words.push_back(temp);
            temp = "";
        }
    }

    Solution sol;
    cout << sol.longestStringChain(words);

    return 0;
}