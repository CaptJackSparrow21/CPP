//https://takeuforward.org/plus/dsa/problems/prime-factorisation-of-a-number?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

//TC = O(n √M)      [n queries × √(max query) trials]
//SC = O(n log M)   [Output size (prime factors count)]
class Solution {
public:
    vector<int> factorize(int x) {
        vector<int> factors;
        for(int i=2; i*i<=x; i++) {
            while(x % i == 0) {
                factors.push_back(i);
                x /= i;
            }
        }
        if(x > 1) factors.push_back(x);
        return factors;
    }

    vector<vector<int>> primeFactors(vector<int> &queries) {
        int n = queries.size();
        vector<vector<int>> res(n);
        for(int i=0; i<n; i++) {
            res[i] = factorize(queries[i]);
        }        
        return res;
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
    vector<int> queries;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            queries.push_back(stoi(temp));
        }
    }

    Solution sol;
    vector<vector<int>> ans = sol.primeFactors(queries);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j];
            cout << ((j+1) == ans[i].size() ? "" : ",");
        }
        cout << "]";
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}