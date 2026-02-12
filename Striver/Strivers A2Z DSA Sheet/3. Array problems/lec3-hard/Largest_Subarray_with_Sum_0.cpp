#include<bits/stdc++.h>
using namespace std;

// same as the problem in lec_1 - easy
// longest_subarray_with_sum_k.cpp

class Solution {
  public:
    int maxLen(vector<int>& arr) {
      int k = 0;
      unordered_map<int, int> prefixIndex; // prefixSum, index
      int prefixSum = 0, maxLength = 0;

      for(int i=0; i<arr.size(); i++) {
        prefixSum += arr[i];

        //case 1 : subarray 0 to i has sum k
        if(prefixSum == k) 
            maxLength = i + 1;

        //case 2 : if prefixSum - k was seen before
        if(prefixIndex.find(prefixSum - k) != prefixIndex.end()) {
            maxLength = max(maxLength, i - prefixIndex[prefixSum - k]);
        }

        //store first occurence of prefixSum
        if(prefixIndex.find(prefixSum) == prefixIndex.end()) {
            prefixIndex[prefixSum] = i;
        }
      }
      return maxLength;
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
    vector<int> arr;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            arr.push_back(stoi(temp));
        }
    }

    Solution s;

    cout << s.maxLen(arr) << endl;
    return 0;
}