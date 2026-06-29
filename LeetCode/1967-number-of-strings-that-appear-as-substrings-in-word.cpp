class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for(int i=0; i<patterns.size(); i++) {
            string s = patterns[i];
            if(word.find(s) != string::npos)
                cnt++;
        }
        return cnt;
    }
};