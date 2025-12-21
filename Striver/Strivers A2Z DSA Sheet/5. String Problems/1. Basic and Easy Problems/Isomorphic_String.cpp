#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {
    	if(s.size() != t.size()) return false;
        int mpST[256], mpTS[256];
        for(int i=0; i<256; i++) mpST[i] = mpTS[i] = -1;

        for(int i=0; i<s.size(); i++) {
            unsigned char c1 = s[i];
            unsigned char c2 = t[i];

            if(mpST[c1] == -1 && mpTS[c2] == -1) {
                mpST[c1] = c2;
                mpTS[c2] = c1;
            }
            else {
                if(mpST[c1] != c2 || mpTS[c2] != c1) return false;
            }
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    Solution sol;
    cout << (sol.isomorphicString(s, t) ? "True" : "False") << endl;

    return 0;
}