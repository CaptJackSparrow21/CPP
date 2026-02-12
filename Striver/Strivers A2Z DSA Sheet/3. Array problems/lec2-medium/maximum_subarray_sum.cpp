#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], currSum = nums[0];
        for(int i=1; i<nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(currSum, maxSum);
        }
        return maxSum;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums;
    int n; string line;
    getline(cin, line);
    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    Solution s;
    cout << s.maxSubArray(nums);

    return 0;
}