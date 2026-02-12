#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int k) {
        int left = 0, right = nums.size() - 1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == k) return mid;

            if(nums[left] <= nums[mid]) {
                if(nums[left] <= k && k < nums[mid])
                    right = mid - 1;
                else 
                    left = mid + 1;
            }
            else {
                if(nums[mid] < k && k <= nums[right])
                    left = mid + 1;
                else 
                    right = mid - 1;
            }
       }
       return -1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    string temp;
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    int k; cin >> k;
    Solution s;
    cout << s.search(nums, k) << endl;

    return 0;
}