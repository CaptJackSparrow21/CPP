//https://takeuforward.org/plus/dsa/problems/string-to-integer-atoi

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int myAtoi(string input) {
        int n = input.size();
        int i=0;
        while(i < n && input[i] == ' ') i++;
        
        if(i == n) return 0;

        int sign = 1;
        if(input[i] == '+' || input[i] == '-') {
            if(input[i] == '-') sign = -1;
            i++;
        }

        long long ans = 0;
        while(i < n && input[i] >= '0' && input[i] <= '9') {
            int d = input[i] - '0';

            if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && d > INT_MAX % 10)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + d;
            i++;
        }
        return (int)(sign * ans);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input; cin >> input;
    //getline(cin, input);
    Solution sol;
    cout << sol.myAtoi(input) << endl;

    return 0;
}