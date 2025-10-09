#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    if(!(cin >> n)) return 0;
    int free = 0;
    int untreated = 0;

    for(int i=0; i<n; i++) {
        int x; cin >> x;
        if(x == -1) {
            if(free > 0) {
                free--;
            }
            else {
                untreated++;
            }
        }
        else{
            free += x;
        }
    }
    cout << untreated << endl;
    return 0;
}