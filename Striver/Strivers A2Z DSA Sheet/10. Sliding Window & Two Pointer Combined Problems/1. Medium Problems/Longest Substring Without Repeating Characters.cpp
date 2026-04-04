//https://takeuforward.org/plus/dsa/problems/longest-substring-without-repeating-characters?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int longestNonRepeatingSubstring(string &s) {
        unordered_map<char, int> mp;
        int l = 0, ans = 0;

        for(int r=0; r<s.size(); r++) {
            if(mp.count(s[r]) && mp[s[r]] >= l)
                l = mp[s[r]] + 1;
            mp[s[r]] = r;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }   
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;
    cout << sol.longestNonRepeatingSubstring(s);  

    return 0;
}