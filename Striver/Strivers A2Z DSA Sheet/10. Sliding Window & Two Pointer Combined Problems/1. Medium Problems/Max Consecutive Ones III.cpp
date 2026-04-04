//https://takeuforward.org/plus/dsa/problems/max-consecutive-ones-iii?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int longestOnes(vector<int> &nums, int k) {
        int l = 0, zeros = 0, ans = 0;

        for(int r=0; r<nums.size(); r++) {
            if(nums[r] == 0) zeros++;

            if(zeros > k) {
                if(nums[l] == 0) zeros--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
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
    vector<int> nums;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            nums.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.longestOnes(nums, k);


    return 0;
}