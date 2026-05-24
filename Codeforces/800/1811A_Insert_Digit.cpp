#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, d;
        cin >> n >> d;
        string s; cin >> s;

        bool inserted = false;
        for(int i=0; i<s.size(); i++) {
            if(s[i] - '0' < d) {
                cout << d;
                for(int j=i; j<s.size(); j++) 
                    cout << s[j];

                inserted = true;
                break;
            }
            cout << s[i];
        }

        if(!inserted)
            cout << d;
        
        cout << endl;
    }

    return 0;
}