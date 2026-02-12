#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return;

        int first = nums[0];
        for(int i=0; i<n-1; i++) {
            nums[i] = nums[i+1];
        }
        nums[n-1] = first;
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
    s.rotateArrayByOne(nums);

    for(int i: nums) {              // for(int i=0; i<nums.size(); i++) {
        cout << i <<  " " ;         //      cout << nums[i] << " ";
    }                               //  }
    return 0;
}