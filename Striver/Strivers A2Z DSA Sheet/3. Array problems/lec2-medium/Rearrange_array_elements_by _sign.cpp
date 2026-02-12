#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg, ans;

        for(int i: nums) {
            if(i>0) pos.push_back(i);
            else neg.push_back(i);
        }
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] > 0) pos.push_back(nums[i]);
        //     else neg.push_back(nums[i]);
        // }

        for(int i=0; i<pos.size();i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
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
    auto ans = s.rearrangeArray(nums);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}