#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
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
    
    int target; cin >> target;
    Solution s;
    int ans = s.linearSearch(nums, target);

    cout << ans << endl;

    return 0;
}