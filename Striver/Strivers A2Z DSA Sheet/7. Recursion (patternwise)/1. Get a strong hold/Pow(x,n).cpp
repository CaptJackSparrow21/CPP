//https://takeuforward.org/plus/dsa/problems/pow(x,n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;
        if(exp < 0) {
            x = 1.0 / x;
            exp = -exp;
        }
        double ans = 1.0, base = x;
        while(exp > 0) {
            if(exp & 1LL) ans *= base;
            base *= base;
            exp >>= 1; 
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x; cin >> x;
    int n; cin >> n;

    Solution sol;
    cout << sol.myPow(x, n) << endl;

    return 0;
}