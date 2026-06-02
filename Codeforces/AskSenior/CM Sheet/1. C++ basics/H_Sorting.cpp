#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    vector<int> selectionSort(vector<int> &nums) {
        for(int i=0; i<nums.size(); i++) {
            int minVal = nums[i];
            int k = i;

            for(int j=i+1; j<nums.size(); j++) {
                if(nums[j] < minVal) {
                    minVal = nums[j];
                    k = j;
                }
            }
            if(k != i) {
                swap(nums[k], nums[i]);
            }
        }
        return nums;
    }
};

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    Solution sol;
    vector<int> ans = sol.selectionSort(nums);

    for(int i=0; i<n; i++) {
        cout << ans[i];
        cout << ((i+1) == n ?  "" : " ");
    }

    return 0;
}