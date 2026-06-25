//https://takeuforward.org/plus/dsa/problems/word-ladder-i?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(N × M × 26)  &&  SC = O(N)
//N = number of words
//M = length of each word
class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string> &wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<pair<string, int>> q;
        q.push({startWord, 1});

        while(!q.empty()) {
            auto [word, steps] = q.front();
            q.pop();

            if(word == targetWord)
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

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string startWord, targetWord;
    vector<string> wordList;

    string s;
    getline(cin, s);

    stringstream ss(s);
    while(getline(ss, ','))

    return 0;
}