//https://takeuforward.org/plus/dsa/problems/longest-substring-with-at-most-k-distinct-characters?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(k)
class Solution {
public:
    int kDistinctChar(string &s, int k) {
        unordered_map<char, int> freq;
        int l = 0, ans = 0;
        for(int r=0; r<s.size(); r++) {
            freq[s[r]]++;
            while(freq.size() > k) {
                freq[s[l]]--;
                if(freq[s[l]] == 0) freq.erase(s[l]);
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int k; cin >> k;

    Solution sol;
    cout << sol.kDistinctChar(s, k);

    return 0;
}