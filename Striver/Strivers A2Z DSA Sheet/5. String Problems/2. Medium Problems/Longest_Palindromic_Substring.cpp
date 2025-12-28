#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n == 0) return "";

        int bestStart = 0, bestLen = 1;
        for(int i=0; i<n; i++) {
            // odd length palindrome centre at i
            expandAroundCentre(s, i, i, bestStart, bestLen);
            // even length palindrome centre at i and i+1
            expandAroundCentre(s, i, i+1, bestStart, bestLen);
        }
        return s.substr(bestStart, bestLen);
    }

private:
    void expandAroundCentre
            (string &s, int l, int r, int &bestStart, int &bestLen) {
        int n = s.length();
        while(l >= 0 && r < n && s[l] == s[r]) {
            int currLen = r - l + 1;

            if(currLen > bestLen) {
                bestLen = currLen;
                bestStart = l;
            }
            l--;
            r++;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;  
    cout << sol.longestPalindrome(s) << endl;
    return 0;
}