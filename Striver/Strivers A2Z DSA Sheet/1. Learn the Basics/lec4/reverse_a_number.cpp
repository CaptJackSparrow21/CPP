#include<bits/stdc++.h>
using namespace std;

class Solution {
public :
        int reverseNumber(int n) {
            long long rev = 0;

            while(n != 0) {
                rev = rev * 10 + n % 10;
                n /= 10;
            }

            if(rev < INT_MIN || rev > INT_MAX) {
                return 0;
            }
            
            return static_cast<int> (rev);
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    Solution s;
    cout << "The reversed number is : " << s.reverseNumber(n) << endl;
    return 0;
}

