#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.empty()) return false;
        int left = 0, right = nums.size() - 1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) return true;

            if(nums[left] == nums[mid] && nums[mid] == nums[right]){
                left++;
                right--;
                continue;
            }

            if(nums[left] <= nums[mid]) {
                if(nums[left] <= target && target < nums[mid]) 
                    right = mid - 1;
                else    
                    left = mid + 1;
            }
            else {
                if(nums[mid] < target && target <= nums[right]) 
                    left = mid + 1;
                else    
                    right = mid - 1;
            }
        }
        return false;
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

    int target; cin >> target;

    Solution s;
    cout << (s.search(nums, target) ? "true" : "false") << endl;

    return 0;
}