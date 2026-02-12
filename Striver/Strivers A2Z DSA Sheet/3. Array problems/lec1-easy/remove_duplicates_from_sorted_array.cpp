// Given an integer array nums sorted in non-decreasing order, 
// remove all duplicates in-place.
// so that each unique element appears only once.
// Return the number of unique elements in the array.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()) return 0;

        int i=0;
        for(int j=1; j<n; j++) {
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>nums;
    int n;
    string line;
    getline(cin, line);
    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    Solution s;
    int ans =  s.removeDuplicates(nums);

    for(int i=0; i<ans; i++) {
        cout << nums[i] << " " ;
    }
    cout << endl;
    return 0;
}