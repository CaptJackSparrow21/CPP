//https://takeuforward.org/plus/dsa/problems/top-k-frequent-elements?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log k) && SC = O(n)
class Solution {
public:
    vector<int> topKFrequent(const vector<int> &nums, int k) {
        unordered_map<int, int> freq;

        for(int x : nums)
            freq[x]++;

        //min heap (frequency, element)
        priority_queue<pair<int, int>, vector<pair<int, int>>, 
                                greater<pair<int, int>>> pq;

        for(auto &p : freq) {
            pq.push({p.second, p.first});

            if(pq.size() > k)
                pq.pop();
        }

        vector<int> ans;
        while(!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
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
    vector<int> nums;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            nums.push_back(stoi(temp));
    }

    Solution sol;
    vector<int> ans = sol.topKFrequent(nums, k);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}