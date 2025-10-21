#include<bits/stdc++.h>
using namespace std;

// sum of subarray(l,r) = prefix Sum[r] - prefix Sum[1-1]
// We want: prefix Sum[r] - prefix Sum[1-1] = k
// Rearrange: prefix Sum[1-1] = prefix Sum[r] - k
// So if at index r = i, our current prefix sum is prefixSum
// then we just need to know if some earlier prefix sum = (prefixSum - k) existed.

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        unordered_map<int, int> prefixIndex ;// prefixSum , index
        int prefixSum = 0, maxLen = 0;

        for(int i=0; i<nums.size(); i++) {
            prefixSum += nums[i];

            // case 1 : subarray 0 to i has sum k
            if(prefixSum == k)
                maxLen = i+1;

            // case 2 : if prefixSum - k was seen before
            if(prefixIndex.find(prefixSum - k) != prefixIndex.end()) {
                maxLen = max(maxLen, i - prefixIndex[prefixSum - k]);
            }

            //store first occurence of prefixSum
            if(prefixIndex.find(prefixSum) == prefixIndex.end())
                prefixIndex[prefixSum] = i;
        }

        return maxLen;  
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>nums;
    int n; string line;
    getline(cin, line);
    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    int k; cin >> k;

    Solution s;
    cout << s.longestSubarray(nums, k) << endl;

    return 0;
}