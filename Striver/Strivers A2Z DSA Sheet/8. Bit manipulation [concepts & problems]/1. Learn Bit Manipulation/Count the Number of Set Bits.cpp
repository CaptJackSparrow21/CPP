//https://takeuforward.org/plus/dsa/problems/count-the-number-of-set-bits

#include<bits/stdc++.h>
using namespace std;

//TC = O(log n) & SC = O(1)
class Solution {
public:
    int countSetBits(int n) {
        int cnt = 0;
        while(n) {
            n &= n-1;
            cnt++;
        }
        return cnt;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution sol;
    cout << sol.countSetBits(n);

    return 0;
}