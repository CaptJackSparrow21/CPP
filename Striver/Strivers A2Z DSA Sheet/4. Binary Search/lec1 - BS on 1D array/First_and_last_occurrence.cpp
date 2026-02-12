#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        auto findIndex = [&] (bool findFirst) {
            int left = 0, right = nums.size() - 1, result = -1;
            while(left <= right) {
                int mid = left + (right - left) / 2;
                if(nums[mid] == target) {
                    result = mid;
                    if(findFirst) right = mid - 1;
                    else left = mid + 1;
                } 
                else if(nums[mid] < target) {
                    left = mid + 1;
                } 
                else {
                    right = mid - 1;
                }
            }
            return result;
        };
        int first = findIndex(true);
        int last = findIndex(false);
        return {first, last};
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
    vector<int> ans = s.searchRange(nums, target);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i != ans.size() - 1) cout << ",";
    }
    cout <<"]";

    return 0;
}