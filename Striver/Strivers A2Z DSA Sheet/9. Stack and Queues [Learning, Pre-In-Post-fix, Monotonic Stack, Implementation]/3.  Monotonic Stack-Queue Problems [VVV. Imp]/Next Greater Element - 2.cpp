//https://takeuforward.org/plus/dsa/problems/next-greater-element---2?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    vector<int> nextGreaterElements(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;

        for(int i=2*n - 1; i>=0; i--) {
            int idx = i % n;
            
            while(!st.empty() && st.top() <= arr[idx]) {
                st.pop();
            }

            if(i < n) {
                if(!st.empty())
                    ans[idx] = st.top();
            }

            st.push(arr[idx]);
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    vector<int> arr;
    string temp;
    while(getline(ss, temp, ',')) {
        arr.push_back(stoi(temp));
    }

    Solution sol;
    vector<int> ans = sol.nextGreaterElements(arr);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}