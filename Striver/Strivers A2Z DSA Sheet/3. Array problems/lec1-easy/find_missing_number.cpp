#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        int missingNumber(vector<int> &nums) {
            int n = nums.size();
            int xor_all = 0;

            for(int i=0; i<n; i++) {
                xor_all ^= i ^ nums[i];
            }
            return xor_all ^ n;
        }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int total_sum  = n *(n+1) / 2;
//         int actual_sum = accumulate(nums.begin(), nums.end(), 0);
//         return total_sum - actual_sum;
//     }
// };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    vector<int> nums;
    int n;
    string line;
    getline (cin, line);
    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    Solution s;
    cout << s.missingNumber(nums) << endl;

    return 0;
}