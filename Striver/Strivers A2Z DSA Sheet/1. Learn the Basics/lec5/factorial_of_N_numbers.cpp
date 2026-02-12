#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        int factofN(int n) {
            if(n==0 || n==1) return 1;
            return n * factofN(n-1);
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution s;
    cout << "The Value of " << n << " factorial is : " << s.factofN(n) << endl;
    return 0;
}