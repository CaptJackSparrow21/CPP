#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        vector<int> result(2, -1);

        if(n == 0) return result;
        int left = 0, right = n - 1;
        while(left <= right) {
            int mid = left + (right  - left) / 2;
            if(nums[mid] == x) {
                result[0] = nums[mid];
                result[1] = nums[mid];
                return result;
            }
            else if(nums[mid] < x) {
                result[0] = nums[mid];
                left = mid + 1;
            } else {
                result[1] = nums[mid];
                right = mid - 1;
            }
        }
        return result;
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

    int x; cin >> x;

    Solution s;
    vector<int> ans = s.getFloorAndCeil(nums, x);

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}