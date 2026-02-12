#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string input) {
        int i = 0, n = input.size();
        int sign = 1;
        int result = 0;

        while(i < n && input[i] == ' ') i++;
        if(i < n && (input[i]== '+' || input[i] == '-')) {
            sign = ((input[i] == '-') ? -1 : +1);
            i++;
        }

        while(i < n && isdigit(input[i])) {
            int digit = input[i] - '0';

            if(result > (INT_MAX - digit) / 10) {
                return ((sign == 1) ? INT_MAX : INT_MIN);
            }

            result = result * 10 + digit;
            i++;
        }
        return sign * result;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input; cin >> input;
    Solution sol;
    cout << sol.myAtoi(input) << endl;

    return 0;
}