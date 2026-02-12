#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;

        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[mid++], nums[low++]);
            }
            else if(nums[mid] == 1) {
                mid++;
            }
            else if(nums[mid] == 2) {
                swap(nums[mid], nums[high--]);
            }
        }
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
    s.sortZeroOneTwo(nums);

    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}