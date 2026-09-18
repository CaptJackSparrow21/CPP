//https://takeuforward.org/plus/dsa/problems/longest-increasing-subsequence?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n log n) && SC = O(n)
class Solution {
public:
    int LIS(vector<int> &nums) {
        vector<int> temp;
        for(int x : nums) {
            int idx = lower_bound(temp.begin(), temp.end(), x) - temp.
        }
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<int> nums;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            nums.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << sol.LIS(nums);

    return 0;
}