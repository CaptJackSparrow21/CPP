#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxSoFar = nums[0], minEnd = nums[0], maxEnd= nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] <  0) swap(maxEnd, minEnd);
            maxEnd = max(nums[i], maxEnd * nums[i]);
            minEnd = min(nums[i], minEnd * nums[i]);
            maxSoFar = max(maxSoFar, maxEnd);
        }
        return maxSoFar;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    vector<int> nums;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    Solution s;

    cout << s.maxProduct(nums) << endl;

    return 0;
}