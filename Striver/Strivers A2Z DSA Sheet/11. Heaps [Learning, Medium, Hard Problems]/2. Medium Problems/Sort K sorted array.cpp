//https://takeuforward.org/data-structure/sort-k-sorted-array

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log k) && SC = O(k)
class Solution {
public:
    vector<int> sortNearlySortedArray(vector<int> &arr, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        vector<int> result;

        for(int i=0; i<=k; i++)
            minHeap.push(arr[i]);

        for(int i=k+1; i<arr.size(); i++) {
            result.push_back(minHeap.top());
            minHeap.pop();

            minHeap.push(arr[i]);
        }

        while(!minHeap.empty()) {
            result.push_back(minHeap.top());
            minHeap.pop();
        }

        return result;
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
    vector<int> arr;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            arr.push_back(stoi(temp));
    }

    Solution sol;
    vector<int> ans = sol.sortNearlySortedArray(arr, k);
    
    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << (i+1 == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}