//https://takeuforward.org/plus/dsa/problems/count-number-of-nice-subarrays?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int atMost(vector<int> &nums, int k) {
        if(k < 0) return 0;
        int l = 0, cnt = 0, odds = 0;
        for(int r=0; r<nums.size(); r++) {
            odds += nums[r] % 2;

            while(odds > k)
                odds -= nums[l++] % 2;
            cnt += r - l + 1;
        }
        return cnt;
    }

    int numberOfOddSubarrays(vector<int> &nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int k; cin >> k;
    
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
    cout << sol.numberOfOddSubarrays(nums, k);

    return 0;
}