#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestSubarraySumMinimized(vector<int> &a, int k) {
        int low = *max_element(a.begin(), a.end());
        int high = accumulate(a.begin(), a.end(), 0);
        int ans = high;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(canSplit(a, k, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }

    bool canSplit(const vector<int> a, int k, int limit) {
        int sum = 0;
        int parts = 1;
        for(int x : a) {
            if(sum + x <= limit) {
                sum += x;
            }
            else {
                parts++;
                sum = x;
                if(parts > k) return false;
            }
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

    stringstream ss(input);
    string temp;
    vector<int> a;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            a.push_back(stoi(temp));
        }
    }

    int k; cin >> k;
    Solution s;
    cout << s.largestSubarraySumMinimized(a, k) << endl;

    return 0;
}