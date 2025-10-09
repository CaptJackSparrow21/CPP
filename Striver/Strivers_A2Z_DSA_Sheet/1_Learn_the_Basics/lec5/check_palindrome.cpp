#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        bool checkPalindrome(string &s ) {
            int left = 0;
            int right = s.size()-1;

            while(left < right) {
                if(s[left] != s[right]) return false;
                left++;
                right--;
            }
            return true;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution t;

    if(t.checkPalindrome(s)) {
        cout << "Given string is Palindrome.";
    }    
    else {
        cout << "Given string is not Palindrome.";
    }
    return 0;
}