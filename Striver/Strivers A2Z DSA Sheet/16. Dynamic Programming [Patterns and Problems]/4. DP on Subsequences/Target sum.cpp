//https://takeuforward.org/plus/dsa/problems/target-sum?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * p) && SC = O(p)
class Solution {
public:
    int targetSum(int n, int target, vector<int> &nums) {
        const int mod = 1e9 + 7;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum + target < )
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int target; cin >> target;

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

    int n = nums.size();
    Solution sol;
    cout << sol.targetSum(n, target, nums);

    return 0;
}