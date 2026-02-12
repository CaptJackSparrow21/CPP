#include<bits/stdc++.h>
using namespace std;

#define ll long long
class Solution {
public:
    int floorSqrt(int n)  {
        ll left = 0, right = n;
        while(left <= right) {
            ll mid = left + (right - left) / 2;
            ll val = mid * mid;

            if(val == n) return mid;
            else if(val < n) left = mid + 1;
            else right = mid - 1;
        }
        return right;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution s;
    cout << s.floorSqrt(n) << endl;

    return 0;
}