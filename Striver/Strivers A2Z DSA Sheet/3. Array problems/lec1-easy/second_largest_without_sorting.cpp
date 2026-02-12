#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        int secondLargestElement(vector<int> &nums) {
            int first = INT_MIN, second = INT_MIN;
            if(nums.size() < 2) return -1;
            for(int i=0; i<nums.size(); i++) {
                if(nums[i] > first) {
                    second = first;
                    first = nums[i];
                }
                else if(nums[i] < first && nums[i] > second) {
                    second = nums[i];
                }
            }
            return (second == INT_MIN ) ? -1 : second;
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

    if(s.secondLargestElement(nums) == -1) {
        cout << "There is no second largest element in the array.";
    }
    else {
        cout << "Second largest element in the array is : " <<
            s.secondLargestElement(nums) << endl;
    }
    
    return 0;
}