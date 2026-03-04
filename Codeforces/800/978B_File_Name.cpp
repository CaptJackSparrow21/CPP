#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s; cin >> s;
    

    int ans = 0, cnt = 0;;
    for(int i=0; i<n; i++) {
        if(s[i] == 'x')
            cnt++;
        else {
            if(cnt >= 3) 
                ans += cnt - 2;
            cnt = 0;
        }
        
    }
    if(cnt >= 3) ans += cnt - 2;

    cout << ans;

    return 0;
}