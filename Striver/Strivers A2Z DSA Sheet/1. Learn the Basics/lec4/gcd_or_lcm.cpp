#include<bits/stdc++.h>
using namespace std;

class Solution {
    public : 
        pair<int, int> GCD_and_LCM(int n1, int n2) {
            int x = n1, y = n2;
            
            while(y != 0) {
            int temp = y;
                y = x % y;
                x = temp;
            }
            int gcd = x;
            int lcm  = (n1 * n2) / gcd;
            return {gcd, lcm};
        }   
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n1, n2;
    cin >> n1 >> n2;
    Solution s;
    auto ans =  s.GCD_and_LCM(n1, n2);
    cout << "GCD : " << ans.first << endl << "LCM : " << ans.second << endl;
    return 0;
}