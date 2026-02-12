#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        unordered_map<int, int> prefixSumCount; // sum , how many times
        int count = 0, sum = 0;                 //       sum has appeared
        prefixSumCount[0] = 1;
        for(int n : nums) {
            sum += n;
            if(prefixSumCount.count(sum - k)) {
                count += prefixSumCount[sum - k];
            }
            prefixSumCount[sum]++;
        }
        return count;
    }
};

// class Solution{
// public:
//     int subarraySum(vector<int> &nums, int k){
//         int n = nums.size();
//         int count = 0;
//         for(int i=0; i<n; i++) {
//             int sum = 0;
//             for(int j=i; j<n; j++) {
//                 sum += nums[i];
//                 if(sum == k) count++;
//             }
//         }
//         return count;
//     }
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums;
    string line;
    int n;
    getline(cin, line);
    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    int k; cin >> k;

    Solution s;

    cout << s.subarraySum(nums, k) << endl;

    return 0;
}