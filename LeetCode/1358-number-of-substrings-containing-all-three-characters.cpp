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