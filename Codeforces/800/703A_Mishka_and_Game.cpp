#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; cin >> n;
    int chris=0, mishka=0;
    for(int i=0; i<n; i++){
        int c, m;
        cin >> m >> c;
        if(c > m) chris++;
        else if(c < m) mishka++;
        else if(c == m) chris++, mishka++;
    }
    if(chris > mishka) cout << "Chris";
    else if(chris < mishka) cout << "Mishka";
    else if (chris == mishka) cout << "Friendship is magic!^^";
    cout << endl;
    
    return 0;
}