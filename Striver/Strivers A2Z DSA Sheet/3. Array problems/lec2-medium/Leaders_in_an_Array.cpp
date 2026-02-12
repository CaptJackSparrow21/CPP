#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int max = nums[n-1];
        ans.push_back(max);

        for(int i=n-2; i>=0; i--) {
            if(nums[i] > max) {
                max = nums[i];
                ans.push_back(max);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
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
    auto ans = s.leaders(nums);

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}