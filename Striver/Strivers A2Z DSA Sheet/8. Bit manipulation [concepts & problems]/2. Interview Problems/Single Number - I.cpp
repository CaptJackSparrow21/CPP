//https://takeuforward.org/plus/dsa/problems/single-number---i?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

//TC = O(n) && SC = O(1)
class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int ans = nums[0];
        for(int i=1; i<nums.size(); i++) {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);

    line.erase(remove(line.begin(), line.end(), '['), line.end());
    line.erase(remove(line.begin(), line.end(), ']'), line.end());

    stringstream ss(line);
    vector<int> nums;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    Solution sol;
    cout << sol.singleNumber(nums);

    return 0;
}