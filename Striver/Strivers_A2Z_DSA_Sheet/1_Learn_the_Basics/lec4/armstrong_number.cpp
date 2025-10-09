#include<bits/stdc++.h>
using namespace std;

// class Solution {
//     public :
//         bool isArmstrong(int n) {
//             int num = n;

//             //count no. of digits
//             int digit = 0;
//             int temp = n;
//             while(temp > 0) {
//                 digit++;
//                 temp /= 10;
//             }

//             //resetting temp to n for ssecond loop
//             temp = n;
//             int sum = 0;
//             while(temp > 0) {
//                 int power = 1;
//                 int number = temp % 10;
//                 for(int i=0; i<digit; i++) {
//                     power = power * number;  
//                 }
//                 sum = sum + power;
//                 temp /= 10;
//             }
//             return (sum == num);

//         }
// };

class Solution {
    public :
            bool isArmstrong(int n) {
                int digits = to_string(n).size();
                int sum = 0, temp = n;

                while(temp) {
                    int d = temp % 10;
                    sum += pow(d, digits);
                    temp /= 10;
                }

                return (sum == n);
        }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution s;

    if(s.isArmstrong(n)) {
        cout << "The given number is Armstrong number." << endl;
    }
    else {
        cout << "The given number is not Armstrong number." << endl;
    }
    return 0;
}