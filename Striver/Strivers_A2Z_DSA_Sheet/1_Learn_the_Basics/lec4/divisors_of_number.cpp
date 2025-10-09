#include<bits/stdc++.h>
using namespace std;

class Solution {
    public : 
        vector<int> divisors(int n) {
            vector<int>result;

            for(int i=1; i*i <=n; i++) {
                if(n % i == 0) {
                    result.push_back(i);
                        if(i != (n/i)) {
                            result.push_back(n/i);
                        }
                }
            }
            sort(result.begin(), result.end());
            return result;
        }
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution s;
    vector<int> ans = s.divisors(n);

    cout << "The divisors of number are : " << endl ;
    cout << "{ " ;
    for(size_t i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i+1 < ans.size()) cout << ", ";
    }
    cout << " }" << endl;
    return 0;
}