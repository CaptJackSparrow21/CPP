#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int minimumRateToEatBananas(vector<int> nums, int h) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        while(left < right) {
            int mid = left + (right - left) / 2;
            if(canFinish(nums, h, mid)) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }
        return left;
    }

private:
    bool canFinish(vector<int> nums, int h, int k) {
        long long hrs = 0;
        for(int i : nums) {
            hrs += (i + k - 1) / k;
            if(hrs > h) {   //early exit if already exceeds h 
                return false;
            }   
        }
        return hrs <= h;
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

    int h; cin >> h;
    Solution s;
    cout << s.minimumRateToEatBananas(nums, h) << endl;

    return 0;
}