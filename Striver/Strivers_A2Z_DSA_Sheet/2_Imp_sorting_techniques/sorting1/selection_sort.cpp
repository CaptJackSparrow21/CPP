#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
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

int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        vector<int>nums;
        int n;
        string line;
        getline(cin, line);

        stringstream ss(line);
        while(ss >> n) {
            nums.push_back(n);
        }

        Solution s;
        auto ans = s.selectionSort(nums);

        cout << "[ ";
        for(int i=0; i<ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "]" << endl;

        return 0;
}