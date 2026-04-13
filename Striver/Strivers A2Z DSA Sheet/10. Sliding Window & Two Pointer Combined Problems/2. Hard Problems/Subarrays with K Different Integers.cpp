//https://takeuforward.org/plus/dsa/problems/subarrays-with-k-different-integers?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(k)
class Solution {
public:
    int atMost(vector<int> &nums, int k) {
        unordered_map<int, int> freq;
        int l=0, ans = 0;
        for(int r=0; r<nums.size(); r++) {
            freq[nums[r]]++;
            while(freq.size() > k) {
                freq[nums[l]]--;
                if(freq[nums[l]] == 0)
                    freq.erase(nums[l]);
                l++;
            }
            ans += r - l + 1;
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int> &nums, int k) {
        return atMost(nums, k) - atMost(nums, k-1);
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
    cout << sol.subarraysWithKDistinct(nums, k);

    return 0;
}