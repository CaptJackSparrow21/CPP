//https://takeuforward.org/plus/dsa/problems/convert-min-heap-to-max-heap?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(log n)
class Solution {
public:
    void maxHeapify(vector<int> &nums, int i, int n) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if(left < n && nums[left] > nums[largest])
            largest = left;
        if(right < n && nums[right] > nums[largest])
            largest = right;

        if(largest != i) {
            swap(nums[i], nums[largest]);
            maxHeapify(nums, largest, n);
        }
    }

    vector<int> minToMaxHeap(vector<int> nums) {
        int n = nums.size();
        for(int i=n/2 - 1; i>=0; i--) 
            maxHeapify(nums, i, n);

        return nums;
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
    vector<int> ans = sol.minToMaxHeap(nums);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << (i+1 == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}