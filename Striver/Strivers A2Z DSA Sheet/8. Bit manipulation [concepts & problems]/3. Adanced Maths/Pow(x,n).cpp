//https://takeuforward.org/plus/dsa/problems/pow(x,n)?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(log n) && SC = O(1) 
class Solution {
public:
    double myPow(double x, int n) {
        ll power = n;
        if(power < 0) {
            x = 1/x;
            power = -power;
        }

        double ans = 1;
        while(power > 0) {
            if(power % 2 == 1)
                ans *= x;

            x *= x;
            power /= 2;
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x; int n;
    cin >> x >> n;

    Solution sol;
    cout << fixed << setprecision(4) << sol.myPow(x, n);

    return 0;
}