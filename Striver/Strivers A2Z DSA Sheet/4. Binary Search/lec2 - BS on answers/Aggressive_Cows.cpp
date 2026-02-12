#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());
        int low = 1, high = nums.back() - nums.front(), ans = 0;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(canPlace(nums, k, mid)) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }

    bool canPlace(const vector<int> nums, int k, int dist) {
        int last = nums[0], cnt = 1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] - last >= dist){
                cnt++;
                last = nums[i];
                if(cnt >= k) return true;
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

    int k; cin >> k;
    Solution s;
    cout << s.aggressiveCows(nums, k) << endl;

    return 0;
}