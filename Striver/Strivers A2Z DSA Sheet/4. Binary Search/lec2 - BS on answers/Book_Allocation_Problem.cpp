#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPages(vector<int> &nums, int m)  {
        int n = nums.size();
        if(m > n) return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(canAllocate(nums, m, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }

    bool canAllocate(const vector<int> nums, int m, int limit) {
        int students = 1;
        int pages = 0;
        for(int x : nums) {
            if(x > limit) return false;
            if(pages + x <= limit) {
                pages += x;
            }
            else {
                students++;
                pages = x;
            }
            if(students > m) return false;
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    string temp;
    stringstream ss(input);
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    int m; cin >> m;

    Solution s;
    cout << s.findPages(nums, m) << endl;

    return 0;
}