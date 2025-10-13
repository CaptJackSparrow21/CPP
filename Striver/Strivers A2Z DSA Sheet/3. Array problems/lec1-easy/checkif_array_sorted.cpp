#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        bool isSorted(vector<int> &nums) {
            int n = nums.size();
            for(int i=0; i<n-1; i++) {
                if(nums[i+1] < nums[i]) {
                    return false;
                }
            }
            return true;
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
    if(s.isSorted(nums)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}