#include<bits/stdc++.h>
using namespace std;

#define ll long long
class Solution {
public:
  int NthRoot(int N, int M) {
        ll left = 0, right = M;
        while(left <= right) {
            ll mid = left + (right - left) / 2;
            long double val = pow(mid, N);

            if(abs(val - M) < 1e-6) return mid;
            else if(val < M) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    Solution s;
    cout << s.NthRoot(N, M) << endl;

    return 0;
}