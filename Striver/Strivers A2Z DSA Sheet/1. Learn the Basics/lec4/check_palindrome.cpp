#include<bits/stdc++.h>
using namespace std;

// class Solution {
//     public : 
//             bool isPalindrome(int n) {
//                 string s = to_string(n);
//                 return s == string(s.rbegin(), s.rend());
//             }
// };

class Solution {
    public :
        bool isPalindrome(int n) {
            if(n < 0) return false;

            long long org = n , rev = 0;

            while (n > 0) {
                rev = rev * 10 + n % 10;
                n /= 10;
            }

            return org == rev;

        }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution sol;
    cout << boolalpha << sol.isPalindrome(n) << endl;
    return 0;
}

