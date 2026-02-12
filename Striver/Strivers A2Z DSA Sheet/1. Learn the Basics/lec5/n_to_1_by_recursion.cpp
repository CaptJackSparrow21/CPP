#include<bits/stdc++.h>
using namespace std;

class Solution {
    public : 
        void print_n_to_1 (int n) {
            if(n==0) return;
            cout << n << " ";
            print_n_to_1(n-1);
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution s;
    s.print_n_to_1(n);
    return 0;
}