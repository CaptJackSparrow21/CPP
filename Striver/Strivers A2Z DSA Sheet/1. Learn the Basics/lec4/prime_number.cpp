#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        bool isPrime(int n) {
            if(n<=1) return false;
            if(n<=3) return true;
            if(n % 2 == 0) return false;

            for(int i=3; i*i<=n; i+=2) {
                if(n % i == 0) {
                    return false;
                }
            }
            return true;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution s;
    
    if(s.isPrime(n)) {
        cout << "Given number is Prime number." << endl;
    }
    else {
        cout << "Given number is Not Prime number."<< endl;
    }
    return 0;
}