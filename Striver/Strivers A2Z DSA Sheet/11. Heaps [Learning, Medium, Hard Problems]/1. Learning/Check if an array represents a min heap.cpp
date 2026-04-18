//https://takeuforward.org/plus/dsa/problems/check-if-an-array-represents-a-min-heap-?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    bool isHeap(vector<int> &nums) {
        int n = nums.size();
        for(int i=0; i<= n/2 - 1; i++) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            if(left < n && nums[left] < nums[i])
                return false;
            if(right < n && nums[right] < nums[i])
                return false;
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    
    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    string temp;
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            nums.push_back(stoi(temp));
    }

    Solution sol;
    cout << boolalpha << sol.isHeap(nums);

    return 0;
}