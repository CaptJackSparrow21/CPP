#include<bits/stdc++.h>
using namespace std;

class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        int result = 0;
        for(int i=0; i<nums.size(); i++) {
            result  = result ^ nums[i];
        }
        return result;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums;
    int n; string line;
    getline(cin, line);
    stringstream ss(line);
    while (ss >> n) nums.push_back(n);

    Solution s;
    cout << s.singleNumber(nums);

    return 0;
}