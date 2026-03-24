//https://takeuforward.org/plus/dsa/problems/sum-of-subarray-minimums?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

//TC = SC = O(n)
#define ll long long
class Solution {
public:
    int sumSubarrayMins(vector<int> &arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;

        vector<int> left(n), right(n);
        stack<int> st;

        //Previous Smaller Element (LEFT array)
        for(int i=0; i<n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            if(st.empty()) left[i] = i+1;
            else left[i] = i - st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        //Next Smaller Element (RIGHT array)    
        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if(st.empty()) right[i] = n-i;
            else right[i] = st.top()-i;

            st.push(i);
        }
        ll ans = 0;

        for(int i=0; i<n; i++) {
            ll contribution = (ll) arr[i] * left[i] * right[i];
            ans = (ans + contribution) % MOD;
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);

    line.erase(remove(line.begin(), line.end(), '['), line.end());
    line.erase(remove(line.begin(), line.end(), ']'), line.end());

    stringstream ss(line);
    vector<int> arr;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            arr.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.sumSubarrayMins(arr);

    return 0;
}