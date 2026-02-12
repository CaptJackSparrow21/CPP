#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int smallestDivisor(vector<int> &nums, int limit) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while(low < high) {
            int mid = low + (high - low) / 2;
            int ans = 0;
            for(int i=0; i<nums.size(); i++) {
                ans += (nums[i] + mid - 1) / mid;
            }
            if(ans <= limit) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
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

    int limit; cin >> limit;
    Solution s;
    cout << s.smallestDivisor(nums, limit) << endl;

    return 0;
}