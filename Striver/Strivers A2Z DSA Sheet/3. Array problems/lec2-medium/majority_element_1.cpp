#include<bits/stdc++.h>
using namespace std;

//optimal method
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = 0, count = 0;
        
        for(int i=0; i<n; i++) {
            if(count == 0) 
                candidate = nums[i];
            if(nums[i] == candidate)
                count++;
            else count--;
        }
        return candidate;
    }
};

//hashmap
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         unordered_map<int, int> freq; //element , frequency
        
//         for(int i=0; i<n; i++) {
//             freq[nums[i]]++;
//             if(freq[nums[i]] > (n/2))
//                 return nums[i];
//         }

//         return -1;
//     }
// };

//sorting
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         return nums[nums.size() / 2];      
//     }
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums;
    int n; string line;
    getline(cin, line);
    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    Solution s;
    cout << s.majorityElement(nums) << endl;

    return 0;
}