#include<bits/stdc++.h>
#include<numeric>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = high;

        while(low <= high) {
            int mid = low + (high - low) /  2;
            if(canShip(weights, days, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }

    bool canShip(vector<int> w, int days, int cap) {
        int usedDays = 1, load = 0;
        for(int x : w) {
            if(load + x <= cap) {
                load += x;
            }
            else {
                usedDays++;
                load = x;
            }
        }
        return usedDays <= days;
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
    vector<int> weights;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            weights.push_back(stoi(temp));
        }
    }

    int days; cin >> days;
    Solution s;
    cout << s.shipWithinDays(weights, days) << endl;

    return 0;
}