//https://takeuforward.org/plus/dsa/problems/minimum-window-substring-?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n+m) && SC = O(m)
class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        if(n < m) return "";

        unordered_map<char, int> need, window;
        for(char c : t) need[c]++;

        int have = 0, need_count = need.size();
        int l = 0, minLen = INT_MAX, start = 0;

        for(int r=0; r<n; r++) {
            char c = s[r];
            window[c]++;
            if(need.count(c) && window[c] == need[c])
                have++;
            
            while(have == need_count) {
                if(r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }
                window[s[l]]--;
                if(need.count(s[l]) && window[s[l]] < need[s[l]])
                    have--;
                l++;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    Solution sol;
    cout << sol.minWindow(s, t);

    return 0;
}