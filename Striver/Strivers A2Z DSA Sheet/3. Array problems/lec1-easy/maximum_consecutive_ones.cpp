#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0, maxCount = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                maxCount = max(count, maxCount);
                count = 0;
            }
        }
        return max(count, maxCount);
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
    cout << s.findMaxConsecutiveOnes(nums) << endl;

    return 0;
}