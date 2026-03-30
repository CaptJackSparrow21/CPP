//https://takeuforward.org/plus/dsa/problems/sliding-window-maximum?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(k)
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int> &arr, int k) {
        deque<int> dq;
        vector<int> ans;

        for(int i=0; i<arr.size(); i++) {
            if(!dq.empty() && dq.front() <= i-k) 
                dq.pop_front();

            while(!dq.empty() && arr[dq.back()] < arr[i])
                dq.pop_back();

            dq.push_back(i);

            if(i >= k-1)
                ans.push_back(arr[dq.front()]);
        }
        return ans;
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
    vector<int> arr;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            arr.push_back(stoi(temp));
    }

    Solution sol;
    vector<int> ans = sol.maxSlidingWindow(arr, k);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }   
    cout << "]";

    return 0;
}