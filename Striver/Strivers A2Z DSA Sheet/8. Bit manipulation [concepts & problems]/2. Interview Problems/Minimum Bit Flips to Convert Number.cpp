//https://takeuforward.org/plus/dsa/problems/minimum-bit-flips-to-convert-number?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(1)
class Solution {
public:
    int minBitsFlip(int start, int goal) {
        return __builtin_popcount(start ^ goal);
        // int ans = 0;
        // int res = start ^ goal;
        // while(res > 0) {
        //     if(res & 1) ans++;
        //     res >>= 1;
        // }
        // return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int start, goal;
    cin >> start >> goal;
    
    Solution sol;
    cout << sol.minBitsFlip(start, goal);

    return 0;
}