//https://takeuforward.org/plus/dsa/problems/check-if-a-number-is-power-of-2-or-not

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(1)
class Solution{
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n-1)) == 0;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution sol;

    cout << boolalpha << sol.isPowerOfTwo(n);

    return 0;
}