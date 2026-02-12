#include<bits/stdc++.h>
using namespace std;

class Solution {
public :
        int countDigit(int n) {
            int count = 0;

            if(n == 0 ) {
                return 1;
            }
    
            while(n > 0){
                n /= 10;
                count++;
            }
            return count ;
        }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    Solution s;
    cout << "The total no. of digits in the number are : " << s.countDigit(n) << endl;
    return 0;
}