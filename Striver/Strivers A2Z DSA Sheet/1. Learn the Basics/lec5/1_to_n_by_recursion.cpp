#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        void print1_to_n(int n) {
            if(n == 0) return;
            print1_to_n(n-1);
            cout << n << " " ;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution s;
    s.print1_to_n(n);
    return 0;
}