//https://takeuforward.org/plus/dsa/problems/divide-two-numbers-without-multiplication-and-division
#include<bits/stdc++.h>
using namespace std;

//TC = O(log n) & SC = O(1)
#define ll long long
class Solution{
public:
    int divide(int dividend, int divisor) {
        if(dividend == 0) return 0;

        ll dvd = abs((ll) dividend);
        ll dvs = abs((ll) divisor);
        ll res = 0;

        bool neg = (dividend > 0) ^ (divisor > 0);
                // true if sign differs

        while(dvd >= dvs) {
            ll temp = dvs, mul = 1;
            while(dvd >= (temp << 1)) {
                temp <<= 1;
                mul <<= 1;
            }
            dvd -= temp;
            res +=  mul;
        }
        if(neg) res = -res;
        if(res > INT_MAX) return INT_MAX;
        if(res < INT_MIN) return INT_MIN;

        return (int) res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dividend, divisor;
    cin >> dividend >> divisor;
    
    Solution sol;
    cout << sol.divide(dividend, divisor) << endl;

    return 0;
}