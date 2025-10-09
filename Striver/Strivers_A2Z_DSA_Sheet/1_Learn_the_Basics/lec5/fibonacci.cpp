#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        int fibonacci(int n) {
            if(n<=1) return n;
            return fibonacci(n-1) + fibonacci(n-2);
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution s;

    cout << "Value is : " << s.fibonacci(n)  << endl;
    return 0;
}