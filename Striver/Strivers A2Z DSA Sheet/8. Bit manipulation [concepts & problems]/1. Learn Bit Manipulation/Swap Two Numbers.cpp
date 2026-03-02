//https://takeuforward.org/plus/dsa/problems/swap-two-numbers?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(1)
class Solution{
public:
    void swap(int &a, int &b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    Solution sol;
    sol.swap(a, b);
    cout << a << ' ' << b;

    return 0;
}