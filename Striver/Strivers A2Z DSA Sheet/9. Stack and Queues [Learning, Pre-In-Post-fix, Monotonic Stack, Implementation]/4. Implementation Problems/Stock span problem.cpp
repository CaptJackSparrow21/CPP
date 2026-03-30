//https://takeuforward.org/plus/dsa/problems/stock-span-problem?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    vector<int> stockSpan(vector<int> arr, int n) {
        vector<int> ans(n);
        stack<int> st;

        for(int i=0; i<n; i++) {
            while(!st.empty() && arr[st.top()] <= arr[i])
                st.pop();

            if(st.empty()) ans[i] = i + 1;
            else ans[i] = i - st.top();
            
            st.push(i);
        }
        
        return ans;
        
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

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
    vector<int> ans = sol.stockSpan(arr, n);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}