#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> parent(26);
vector<bool> used(26, false);

int find(int x){
    if(parent[x] == x)
        return x;
    
    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);

    if(a != b)
        parent[a] = b;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    iota(parent.begin(), parent.end(), 0);

    for(int i=0; i<n; i++) {
        string s; cin >> s;

        int first = s[0] - 'a';

        for(char c : s) {
            int x = c - 'a';
            used[x] = true;
            unite(first, x);
        }
    }

    int ans = 0;
    for(int i=0; i<26; i++) {
        if(used[i] && find(i) == i)
            ans++;
    }

    cout << ans << '\n';

    return 0;
}