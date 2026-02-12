#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();    
        int k = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[k]);
                k++;
            }
        }
    }
};

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
    s.moveZeroes(nums);

    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}