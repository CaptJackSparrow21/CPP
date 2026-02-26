//https://takeuforward.org/plus/dsa/problems/check-if-a-number-is-odd-or-not

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(1)
class Solution{
public:
    bool isOdd(int n) {
        if(n & 1) return true; //if(n % 2) return true
        else return false;     // return false
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution sol;
    cout << boolalpha << sol.isOdd(n);

    return 0;
}