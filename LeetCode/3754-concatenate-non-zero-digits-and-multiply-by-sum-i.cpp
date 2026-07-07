#define ll long long
class Solution {
public:
    long long sumAndMultiply(int n) {
        ll x = 0, sum = 0;
        string s = to_string(n);
        for(char c : s) {
            int d = c - '0';
            sum += d;
            if(d > 0)
                x = x * 10 + d;
        }
        return x * sum;
    }
};