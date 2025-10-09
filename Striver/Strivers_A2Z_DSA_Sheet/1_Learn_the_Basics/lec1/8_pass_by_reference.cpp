#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        a = a + 1;
        b = b + 2;
        return {a, b}; 
    }
};

int main() {
    int a, b;
    cin >> a >> b;
    Solution s;

    vector<int> res = s.passedBy(a, b);  
    cout << res[0] << " " << res[1] << endl;

    return 0;
}
