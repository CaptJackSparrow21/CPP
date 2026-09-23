//https://takeuforward.org/practice/dsa/minimum-number-of-bracket-reversals-to-make-an-expression-balanced

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int countRev(string s) {
        int n = s.size();
        if(n % 2) return -1;
        
        int open = 0, close = 0;

        for(char c : s) {
            if(c == '(')
                open++;
            else if(open > 0)
                open--;
            else 
                close++;
        }
        return (open + 1) / 2 + (close + 1) / 2;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    Solution sol;
    cout << sol.countRev(s);

    return 0;
}