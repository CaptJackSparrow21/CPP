//https://takeuforward.org/practice/dsa/longest-bitonic-subsequence

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n^2) & SC = O(n)
class Solution {
public:
    int LongestBitonicSequence(vector<int> arr) {
        int n = arr.size();
        vector<int> inc(n, 1), dec(n, 1);

        for(int i=0; i<n; i++) 
            for(int j=0; j<i; j++) 
                if(arr[j] < arr[i])
                    inc[i] = max(inc[i], inc[j] + 1);

        for(int i=n-1; i>=0; i--) 
            for(int j=i+1; j<n; j++)
                if(arr[j] < arr[i])
                    dec[i] = max(dec[i], dec[j] + 1);

        int ans = 0;

        for(int i=0; i<n; i++)
            if(inc[i] > 1 && dec[i] > 1)
                ans = max(ans, inc[i] + dec[i] - 1);

        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<int> arr;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            arr.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << sol.LongestBitonicSequence(arr);

    return 0;
}