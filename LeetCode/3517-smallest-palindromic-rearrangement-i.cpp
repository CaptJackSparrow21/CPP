class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size(), j = 0;
        int freq[26] {};

        for(int i=0; i<n >> 1; i++)
            freq[s[i] - 'a']++;

        int left = 0, right = s.size() - 1;

        for(int c = 0; c < 26; c++) {
            while(freq[c]--) {
                s[left++] = 'a' + c;
                s[right--] = 'a' + c;
            }
        }
        return s;
    }
};