//https://takeuforward.org/plus/dsa/problems/binary-subarrays-with-sum?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int atMost(vector<int> &nums, int goal) {
        if(goal < 0) return 0;
        int l = 0, sum = 0, cnt = 0;
        for(int r=0; r<nums.size(); r++) {
            sum += nums[r];
            while(sum > goal)
                sum -= nums[l++];
            cnt += r - l + 1;
        }
        return cnt;
    }

    int numSubarraysWithSum(vector<int> &nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int goal; cin >> goal;

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
    cout << sol.numSubarrayWithSum(nums, goal);

    return 0;
}