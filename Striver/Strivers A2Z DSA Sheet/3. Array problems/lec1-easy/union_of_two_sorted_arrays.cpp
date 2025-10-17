#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int m = nums1.size(), n = nums2.size();
        int i = 0, j = 0;

        while (i < m && j < n) {
            if (i > 0 && nums1[i] == nums1[i - 1]) {
                i++;
                continue;
            }
            if (j > 0 && nums2[j] == nums2[j - 1]) {
                j++;
                continue;
            }
            if (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            else if (nums1[i] > nums2[j]) {
                ans.push_back(nums2[j]);
                j++;
            }
            else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        while (i < m) {
            if (i == 0 || nums1[i] != nums1[i - 1])
                ans.push_back(nums1[i]);
            i++;
        }

        while (j < n) {
            if (j == 0 || nums2[j] != nums2[j - 1])
                ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    vector<int> nums1;
    int n1;
    string line1;
    getline(cin, line1);
    stringstream ss1(line1);
    while(ss1 >> n1) nums1.push_back(n1);

    vector<int> nums2;
    int n2;
    string line2;
    getline(cin, line2);
    stringstream ss2(line2);
    while(ss2 >> n2) nums2.push_back(n2);

    Solution s;
    auto ans = s.unionArray(nums1, nums2);

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }


    return 0;
}