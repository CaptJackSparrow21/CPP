//https://takeuforward.org/plus/dsa/problems/next-greater-element?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && st.top() <= arr[i]) 
                st.pop();

            if(st.empty()) ans[i] = -1;
            else ans[i] = st.top();

            st.push(arr[i]);
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
        if(!temp.empty()) {
            arr.push_back(stoi(temp));
        }
    }

    Solution sol;
    vector<int> ans = sol.nextLargerElement(arr);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << (i+1 == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}