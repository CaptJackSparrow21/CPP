#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOccurrences(const vector<int>& arr, int target) {
        auto findIndex = [&] (bool findFirst){
            int result = 0;
            int left = 0, right = arr.size() - 1;
            while(left <= right) {
                int mid = left + (right - left) / 2;
                if (arr[mid] == target) {
                result = mid;
                if(findFirst) right = mid - 1;
                else left = mid + 1;
            }
            else if(arr[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
                }
            }
            return result;
        };
        int first = findIndex(true);
        int last = findIndex(false);
        return (last - first + 1);
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

    int target; cin >> target;
    Solution s;
    cout << s.countOccurrences(arr, target) << endl;

    return 0;
}