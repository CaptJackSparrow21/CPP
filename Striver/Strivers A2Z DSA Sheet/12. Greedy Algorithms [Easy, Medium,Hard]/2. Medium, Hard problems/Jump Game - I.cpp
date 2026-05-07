//https://takeuforward.org/plus/dsa/problems/jump-game---i?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    bool canJump(vector<int> &nums) {
        int farthest = 0;

        for(int i=0; i<nums.size(); i++) {
            if(i > farthest)
                return false;

            farthest = max(farthest, i + nums[i]);
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    
    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    vector<int> nums;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            nums.push_back(stoi(temp));
    }

    Solution sol;
    cout << boolalpha << sol.canJump(nums);

    return 0;
}