#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue; // skip duplicates
            int left = i + 1, right = n -1;
            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum < 0) left++;
                else if(sum > 0) right--;
                else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++; right--;
                    while(left < right && nums[left] == nums[left - 1]) left++;
                    while(left < right && nums[right] == nums[right + 1]) right--;
                }
            }
        }
        return result;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    //remove '[', ']'
    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    vector<int> nums;
    stringstream ss(input);
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    Solution s;
    vector<vector<int>> ans = s.threeSum(nums);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j];
            if(j+1 != ans[i].size()) cout << ",";
        }
        cout << "]";
        if(i+1 != ans.size()) cout << ",";
    }
    cout << "]";
    return 0;
}