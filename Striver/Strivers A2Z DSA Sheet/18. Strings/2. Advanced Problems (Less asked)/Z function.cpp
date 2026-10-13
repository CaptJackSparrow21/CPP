//https://takeuforward.org/practice/dsa/z-function

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    vector<int> search(string text, string pattern) {

    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string text, pattern;
    cin >> text >> pattern;
    Solution sol;
    vector<int> ans = sol.search(text, pattern);

    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << ' ';


    return 0;
}