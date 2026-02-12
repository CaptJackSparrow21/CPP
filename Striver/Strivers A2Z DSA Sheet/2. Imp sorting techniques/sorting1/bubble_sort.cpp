#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        vector<int> bubbleSort(vector<int> &nums) {
            int n = nums.size();
            int k = 0;
            bool flag;

            for(int i=0; i<n; i++) {
                k++;
                flag = 0;

                for(int j=0; j<n-k; j++) {
                    if(nums[j] > nums[j+1]) {
                        swap(nums[j], nums[j+1]);
                        flag = 1;
                    }
                }

                if(flag == 0) break;
            }
            return nums;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums;
    int n;
    string line;
    getline(cin, line);

    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    Solution s;
    auto ans = s.bubbleSort(nums);

    cout << "[ ";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "]";

    return 0;
}