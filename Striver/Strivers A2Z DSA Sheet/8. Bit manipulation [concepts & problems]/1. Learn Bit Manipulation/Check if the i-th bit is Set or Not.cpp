//https://takeuforward.org/plus/dsa/problems/check-if-the-i-th-bit-is-set-or-not

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(1)
class Solution{
public:
    bool checkIthBit(int n, int i) {
        n = n >> i;
        if(n & 1) return true;
        else return false;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i;
    cin >> n >> i;
    
    Solution sol;
    cout << boolalpha << sol.checkIthBit(n, i);

    return 0;
}