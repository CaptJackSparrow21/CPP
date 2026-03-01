//https://takeuforward.org/data-structure/set-the-rightmost-bit

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(1)
class Solution{
public:
    int setRightmostUnsetBit(int n) {
        if((n & (n+1)) == 0) return n;
        else return n | (n+1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution sol;
    cout << sol.setRightmostUnsetBit(n);

    return 0;
}