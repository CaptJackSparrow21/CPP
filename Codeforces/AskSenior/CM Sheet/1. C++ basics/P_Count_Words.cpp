    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long

    signed main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        string s;
        getline(cin, s);

        int cnt = 1;
        bool word = false;

        for(int i=0; i<s.size(); i++) {
            if(isalpha(c)) {
                if(!word) {
                    cnt++;
                    word = true;
                }
            }
            else 
                word = false;
        }
        cout << cnt;

        return 0;
    }