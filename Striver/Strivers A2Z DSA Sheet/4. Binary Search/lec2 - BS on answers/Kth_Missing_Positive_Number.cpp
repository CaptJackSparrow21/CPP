#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0, right = arr.size() - 1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            int miss = arr[mid] - (mid + 1);
            if(miss < k)  left = mid + 1;
            else  right = mid - 1;
        }
        return left + k;
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
    vector<int> arr;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            arr.push_back(stoi(temp));
        }
    }

    int k; cin >> k;
    Solution s; 
    cout << s.findKthPositive(arr, k) << endl;

    return 0;
}