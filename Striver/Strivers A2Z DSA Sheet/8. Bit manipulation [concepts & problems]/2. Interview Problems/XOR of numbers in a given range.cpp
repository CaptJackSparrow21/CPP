//https://takeuforward.org/plus/dsa/problems/xor-of-numbers-in-a-given-range?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(1)
class Solution{
public:
    int xorUpto(int n){
        int rem = n % 4;    
        if(rem == 0) return n;
        if(rem == 1) return 1;
        if(rem == 2) return n+1;
        return 0;
    }

    int findRangeXOR(int l, int r) {
        return xorUpto(l-1) ^ xorUpto(r);
        //Ex: [4,10] = 4^5^6^7^8^9^10
        //= (0^1^2^3^4^...^10) ^ (0^1^2^3)
        //= xorUpto(10) ^ xorUpto(3) =11^0=11
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    cin >> l >> r;

    Solution sol;
    cout << sol.findRangeXOR(l, r);

    return 0;
}