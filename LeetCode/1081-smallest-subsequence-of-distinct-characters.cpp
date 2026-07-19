class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> freq(26);
        vector<bool> vis(26, false);

        for(char c : s)
            freq[c - 'a']++;

        string st = "";

        for(char c : s) {
            freq[c - 'a']--;

            if(vis[c - 'a'])
                continue;

            while(!st.empty() && st.back() > c &&
                  freq[st.back() - 'a'] > 0) {
                vis[st.back() - 'a'] = false;
                st.pop_back();
            }

            st += c;
            vis[c - 'a'] = true;
        }
        return st;
    }
};