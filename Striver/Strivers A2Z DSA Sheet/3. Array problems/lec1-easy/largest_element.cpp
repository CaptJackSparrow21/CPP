#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-1];
    }
};

// class Solution {
// public:
//     int largestElement(vector<int>& nums) {
//         int max = nums[0];
//         for(int i=0; i<nums.size(); i++) {
//             if(nums[i] > max) {
//                 max = nums[i];
//             }
//         }
//         return max;
//     }
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums;
    int n;
    string line;
    getline(cin, line);
    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    Solution s;
    auto ans = s.largestElement(nums);

    cout << "Largest element : " << ans << endl;
    return 0;
}