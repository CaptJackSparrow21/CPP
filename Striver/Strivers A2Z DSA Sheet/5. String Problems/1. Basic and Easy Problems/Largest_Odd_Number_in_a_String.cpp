#include<bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s){
        int x = INT_MAX;
        for(int i=s.size()-1; i>=0; i--) {
            int d = s[i] - '0';
            if(d % 2 == 1){
                x = i;
                break;
            }
        }
        if(x == INT_MAX) return "";
        int i=0;
        while(i <= x && s[i] == '0') i++;
        return s.substr(i, x - i + 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;
    cout << sol.largeOddNum(s) << endl;

    return 0;
}