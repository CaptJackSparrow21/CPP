//https://takeuforward.org/plus/dsa/problems/longest-repeating-character-replacement?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};
        int l = 0;
        int maxFreq = 0;
        int ans = 0;

        for(int r=0; r<s.size(); r++) {
            freq[s[r] - 'A']++;
            maxFreq = max(maxFreq, freq[s[r] - 'A']);

            while((r - l + 1) - maxFreq > k) {
                freq[s[l] - 'A']--;
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
    cout << sol.characterReplacement(s, k);

    return 0;
}