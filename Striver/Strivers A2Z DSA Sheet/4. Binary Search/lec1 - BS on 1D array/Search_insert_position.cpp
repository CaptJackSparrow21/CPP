#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
       int left = 0, right = nums.size() - 1;
       while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) {
                return mid;
            }

            else if(nums[mid] < target) {
                left = mid + 1;
            }

            else {
                right = mid - 1;
            }
       }
       return left;
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
    cout << s.searchInsert(nums, target) << endl;

    return 0;
}