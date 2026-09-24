//https://takeuforward.org/practice/dsa/count-and-say

#include<bits/stdc++.h>
using namespace std;
#define int long long

// l-> len of largest string
//TC = O(n * l) && SC = O(l)
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i=2; i<=n; i++) {
            string t;
            for(int j=0; j<s.size(); ) {
                int k = j;
                while(k < s.size() && s[k] == s[j])
                    k++;

                t += to_string(k - j) + s[j];
                j = k;
            }
            s = t;
        }
        return s;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    Solution sol;
    cout << sol.countAndSay(n);

    return 0;
}