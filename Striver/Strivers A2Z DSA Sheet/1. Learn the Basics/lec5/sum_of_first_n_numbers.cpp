#include<bits/stdc++.h>
using namespace std;

class Solution {
    public : 
        int sumnNumbers (int n) {
            if(n == 0) return 0;
            return n + sumnNumbers(n-1);
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution s;
    cout << "The sum of 1 to " << n << " numbers is : " << s.sumnNumbers(n) << endl;
    return 0;
}