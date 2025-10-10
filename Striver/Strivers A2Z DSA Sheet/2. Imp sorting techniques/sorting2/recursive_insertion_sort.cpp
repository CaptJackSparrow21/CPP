#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        vector<int> insertionSort(vector<int> & nums) {
            int n = nums.size();
            int key, i;

            for(int j=1; j<n; j++) {
                key = nums[j];
                i = j-1;

                while(i>=0 && nums[i] > key) {
                    nums[i+1] = nums[i];
                    i--;
                }
                nums[i+1] = key;
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
    auto ans = s.insertionSort(nums);

    cout << "Sorted Array : \n";
    cout << "[ ";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "]";

    return 0;
}