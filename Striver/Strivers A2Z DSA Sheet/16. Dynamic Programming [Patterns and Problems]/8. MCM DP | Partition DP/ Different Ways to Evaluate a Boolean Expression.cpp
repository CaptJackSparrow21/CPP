//https://takeuforward.org/practice/dsa/different-ways-to-evaluate-a-boolean-expression

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n^3) && SC = O(n^2)
class Solution {
public:
#define ll long long
    int countTrue(string s) {
        static const int mod = 1e9 + 7;
        int n = s.size();
        vector<vector<ll>> T(n, vector<ll> (n));
        vector<vector<ll>> F(n, vector<ll> (n));

        //base case : single operand
        for(int i=0; i<n; i+=2) {
            T[i][i] = (s[i] == 'T');
            F[i][i] = (s[i] == 'F');
        }

        //Length of expressions interval
        for(int len=3; len<=n; len+=2) {
            for(int i=0; i+len-1<n; i+=2) {
                int j = i + len - 1;

                for(int k=i+1; k<j; k+=2) {
                    ll LT = T[i][k-1];
                    ll LF = F[i][k-1];

                    ll RT = T[k+1][j];
                    ll RF = F[k+1][j];

                    ll t = 0, f = 0;

                    if(s[k] == '&') {
                        t = LT * RT;
                        f = LT * RF + LF * RT + LF * RF;
                    }
                    else if(s[k] == '|') {
                        t = LT * RT + LT * RF + LF * RT;
                        f = LF * RF;
                    }
                    else { // ^
                        t = LT * RF + LF * RT;
                        f = LT * RT + LF * RF;
                    }

                    T[i][j] = (T[i][j] + t) % mod;
                    F[i][j] = (F[i][j] + f) % mod;
                }
            }
        }
        return T[0][n-1];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;

    Solution sol;
    cout << sol.countTrue(s);    

    return 0;
}