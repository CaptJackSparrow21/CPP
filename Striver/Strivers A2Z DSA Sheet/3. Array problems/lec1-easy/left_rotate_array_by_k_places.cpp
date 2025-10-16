#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
            int n = nums.size();
            k = k % n;

            reverse(nums.begin(), nums.end());
            reverse(nums.begin(), nums.end() - k);
            reverse(nums.end() - k, nums.end());
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

    int k; cin >> k;

    Solution s;
    s.rotateArray(nums, k);

    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}

