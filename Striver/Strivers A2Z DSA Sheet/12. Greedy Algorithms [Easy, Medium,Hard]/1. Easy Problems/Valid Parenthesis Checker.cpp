//https://takeuforward.org/plus/dsa/problems/valid-paranthesis-checker?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    bool isValid(string s) {
        int mn = 0, mx = 0;
        for(char c : s) {
            if(c == '(') {
                mn++;
                mx++;
            }
            else if(c == ')') {
                mn--;
                mx--;
            }
            else {  //c == *
                mn--;   //best case ')'
                mx++;   //worst case '('
            }

            mn = max(mn, 0);
            if(mx < 0)
                return false;
        }
        return mn == 0;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;
    cout << boolalpha << sol.isValid(s);  

    return 0;
}