#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int left = 0, right = nums.size() - 1, ans = nums.size();
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] >= x) {
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
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
    cout << s.lowerBound(nums, x) << endl;
    return 0;
}