//https://www.geeksforgeeks.org/problems/bit-manipulation-1666686020/1?utm=codolio

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(1)
class Solution{
public:
    void bitManipulation(int num, int i) {
        i--;        //1-based to 0-based

        //get
        cout << ((num >> i) & 1);

        //set
        num |= (1 << i);
        cout << " " << num;

        //clear
        num &= ~(1 << i);
        cout << " " << num;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num, i;
    cin >> num >> i;

    Solution sol;
    sol.bitManipulation(num, i);

    return 0;
}