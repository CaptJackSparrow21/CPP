#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         bool next = next_permutation(nums.begin(), nums.end());
//     }
// };

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i = n - 2;
        while(i >= 0 && nums[i] >= nums[i+1]) 
            i--;
        if(i >= 0) {
            int j = n - 1;
            while(nums[j] <= nums[i])
                j--;
            swap(nums[j], nums[i]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums;
    int n; string line;
    getline(cin, line);
    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    Solution s;
    s.nextPermutation(nums);

    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
}