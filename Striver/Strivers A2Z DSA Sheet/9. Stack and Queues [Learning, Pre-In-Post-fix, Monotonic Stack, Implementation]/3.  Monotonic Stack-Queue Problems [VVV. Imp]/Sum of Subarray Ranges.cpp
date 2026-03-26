//https://takeuforward.org/plus/dsa/problems/sum-of-subarray-ranges?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(n)
//Answer=∑(Contribution as Max)−∑(Contribution as Min)
#define ll long long
class Solution {
public:
    long long subArrayRanges(vector<int> &nums) {
        int n = nums.size();
        vector<int> nge(n), pge(n), nse(n), pse(n);
        stack<int> st;

        //next Greater
        while(!st.empty()) st.pop();
        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && nums[st.top()] <= nums[i]) st.pop();
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        //previous greater
        while(!st.empty()) st.pop();
        for(int i=0; i<n; i++) {
            while(!st.empty() && nums[st.top()] < nums[i]) st.pop();
            pge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        //next smaller
        while(!st.empty()) st.pop();
        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && nums[st.top()] >= nums[i]) st.pop();
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        //previous smaller
        while(!st.empty()) st.pop();
        for(int i=0; i<n; i++) {
            while(!st.empty() && nums[st.top()] > nums[i]) st.pop();
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        ll maxSum = 0, minSum = 0;

        for(int i=0; i<n; i++) {
            ll left = i - pge[i];
            ll right = nge[i] - i;
            maxSum += nums[i] * left * right;
        }

        for(int i=0; i<n; i++) {
            ll left = i - pse[i];
            ll right = nse[i] - i;
            minSum += nums[i] * left * right;
        }
        return maxSum - minSum;
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
    cout << sol.subArrayRanges(nums);

    return 0;
}