//https://takeuforward.org/plus/dsa/problems/maximum-sum-of-non-adjacent-elements?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int nonAdjacent(vector<int> &nums) {
        int prev1 = 0, prev2 = 0;
        for(int x : nums) {
            int curr = max(prev1, x + prev2);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    vector<int> nums;
    string temp;
    stringstream ss(s);
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            nums.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.nonAdjacent(nums);

    return 0;
}