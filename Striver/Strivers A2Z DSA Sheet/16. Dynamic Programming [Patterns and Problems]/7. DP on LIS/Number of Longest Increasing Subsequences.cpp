//https://takeuforward.org/practice/dsa/number-of-longest-increasing-subsequences

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n^2) && SC = O(n)
class Solution {
public:
    int numberOfLIS(vector<int> nums) {
        int n = nums.size();
        vector<int> len(n, 1), cnt(n, 1);
        int maxLen = 1, ans = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                if(nums[j]< nums[i]) {
                    if(len[j] + 1 > len[i]) {
                        len[i] = len[j] + 1;
                        cnt[i] = cnt[j];
                    }
                    else if(len[j] + 1 == len[i])
                        cnt[i] += cnt[j];
                }
            }
            maxLen = max(maxLen, len[i]);
        }
        for(int i=0; i<n; i++)
            if(len[i] == maxLen)
                ans += cnt[i];

        return ans;
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
    cout << sol.numberOfLIS(nums);

    return 0;
}