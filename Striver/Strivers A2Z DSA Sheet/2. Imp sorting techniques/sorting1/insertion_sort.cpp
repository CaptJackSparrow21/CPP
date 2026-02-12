//*Note : in Cormen Array is 1-based indexing
// but in c++ array is 0-based indexing 

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public :
        vector<int> insertionSort(vector<int> &nums) {
            int n=nums.size();
            int i, key;
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

    vector<int>nums;
    string line ;
    getline(cin, line);

    stringstream ss(line);
    int n;
    while(ss >> n) nums.push_back(n);

    Solution s;
    auto ans = s.insertionSort(nums);

    cout << "[ ";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "]";

    return 0;
}