#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int roseGarden(int n,vector<int> nums, int k, int m) {
        long long need = 1LL * m * k;
        if((long long) n < need) return -1;

        int low = *min_element(nums.begin(), nums.end());
        int high = *max_element(nums.begin(), nums.end());
        int ans = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(canMake(nums, m, k, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }

//private :
    bool canMake(vector<int> nums, int m, int k, int day) {
        int bouque = 0, run = 0;
        for(int x : nums) {
            if(x <= day) {
                if(++run == k) bouque++, run = 0;
            }
            else run = 0;
        }
        return bouque >= m;
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

    int n = nums.size();
    int m; cin >> m;
    int k; cin >> k;

    Solution s;
    cout << s.roseGarden(n, nums, k, m) << endl;

    return 0;
}