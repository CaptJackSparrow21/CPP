#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n+1, vector<char> (m+1));
    for(int i=0; i<n+1; i++) 
        for(int j=0; j<m+1; j++) 
            if(i == 0 || j == 0)
                a[i][j] = 'x';
            else 
                cin >> a[i][j];

    int x, y;
    cin >> x >> y;

    if(a[x-1][y-1] == 'x' && a[x-1][y] == 'x' && a[x-1][y+1] == 'x'
        && a[x][y-1] == 'x' && a[x][y+1] == 'x'&& 
       a[x+1][y-1] == 'x' && a[x+1][y] == 'x' && a[x+1][y+1] == 'x')
       cout << "yes";
    else 
        cout << "no";
            

    return 0;
}