#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 0;

        for(int num : s) {
            if(!s.count(num-1)) {
                int len = 1;
                int curr = num;
                while(s.count(curr + 1)) {
                    curr++;
                    len++;
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.empty()) return 0;
//         sort(nums.begin(), nums.end());
//         int maxLen = 1, currLen = 1;
        
//         for(int i=1; i<nums.size(); i++) {
//             if(nums[i] == nums[i-1]) continue;
//             if(nums[i] == nums[i-1] + 1) {
//                 currLen++;
//             }
//             else{
//                 maxLen = max(currLen, maxLen);
//                 currLen = 1;
//             }
//         }
//         return max(maxLen, currLen);
//     }
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums;
    int n; string line;
    getline(cin, line);
    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    Solution s;
    cout << s.longestConsecutive(nums);

    return 0;
}