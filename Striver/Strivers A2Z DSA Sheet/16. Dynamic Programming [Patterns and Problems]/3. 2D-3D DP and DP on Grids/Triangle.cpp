//https://takeuforward.org/plus/dsa/problems/triangle?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n^2) && SC = O(n)
class Solution {
public:
    int minTriangleSum(vector<vector<int>> &traingle) {
        int n = traingle.size();
        vector<int> dp = traingle[n-1];
        for(int i=n-2; i>=0; i--) 
            for(int j=0; j<=i; j++)
                dp[j] = traingle[i][j] + min(dp[j], dp[j+1]);

        return dp[0];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    vector<vector<int>> traingle;
    vector<int> row;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                traingle.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.minTriangleSum(traingle);

    return 0;
}