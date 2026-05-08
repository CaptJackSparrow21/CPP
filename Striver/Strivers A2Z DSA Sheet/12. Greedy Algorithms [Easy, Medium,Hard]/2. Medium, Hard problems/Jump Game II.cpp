//https://takeuforward.org/plus/dsa/problems/jump-game-ii?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int jump(vector<int> &nums) {
        int jumps = 0;
        int end = 0;
        int farthest = 0;

        for(int i=0; i<nums.size()-1; i++) {
            farthest = max(farthest, i+nums[i]);

            if(i == end) {
                jumps++;
                end = farthest;
            }
        }
        return jumps;
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
    string temp;
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            nums.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.jump(nums);

    return 0;
}