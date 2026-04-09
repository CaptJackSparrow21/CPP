//https://takeuforward.org/plus/dsa/problems/number-of-substrings-containing-all-three-characters?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt[3] = {0};
        int l = 0, ans = 0;
        for(int r=0; r<s.size(); r++) {
            cnt[s[r] - 'a']++;
            while(cnt[0] && cnt[1] && cnt[2]) {
                ans += s.size() - r;
                cnt[s[l] - 'a']--;
                l++;
            }
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    Solution sol;
    cout << sol.numberOfSubstrings(s);

    return 0;
}