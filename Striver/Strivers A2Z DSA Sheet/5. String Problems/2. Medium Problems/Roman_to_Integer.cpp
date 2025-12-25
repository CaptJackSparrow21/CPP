#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int val[256] = {};
        val['I'] = 1;   val['V'] = 5;
        val['X'] = 10;  val['L'] = 50;
        val['C'] = 100; val['D'] = 500;
        val['M'] = 1000;

        int ans = 0;
        for(int i=0; i<s.size(); i++) {
            int curr = val[s[i]];
            if(i+1 < s.size() && curr < val[s[i+1]]) ans -= curr;
            else ans += curr;
        }
        return ans;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;
    cout << sol.romanToInt(s) << endl;

    return 0;
}