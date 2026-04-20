//https://takeuforward.org/plus/dsa/problems/k-th-largest-element-in-an-array?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log k) && SC = O(k)
class Solution {
public:
    int kthLargestElement(vector<int> &nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for(int num : nums) {
            pq.push(num);
            if(pq.size() > k)
                pq.pop();
        }

        return pq.top();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    getline(cin, s);
    int k; cin >> k;
    
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
    cout << sol.kthLargestElement(nums, k);

    return 0;
}