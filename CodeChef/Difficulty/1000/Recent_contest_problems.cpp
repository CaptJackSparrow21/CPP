#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);

        stringstream ss(s);
        string temp;
        int one = 0, two = 0;
        while(getline(ss, temp, ' ')) {
            if(temp == "START38")
                one++;
            else 
                two++;
        }

        cout << one << ' ' << two << '\n';
    }

    return 0;
}