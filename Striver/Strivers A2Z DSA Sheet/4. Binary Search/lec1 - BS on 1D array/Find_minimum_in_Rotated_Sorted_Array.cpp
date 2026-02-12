#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int> &arr)  {
        int left = 0, right = arr.size() - 1;
        while(left < right) {
            int mid = left + (right - left) / 2;
            if(arr[mid] > arr[right]) {
                left = mid + 1;
            }
            else {
                right = mid;
            }
        }
        return arr[left];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(),  '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    string temp;
    vector<int> arr;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            arr.push_back(stoi(temp));
        }
    }

    Solution s;
    cout << s.findMin(arr) << endl;

    return 0;
}