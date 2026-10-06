    #include<bits/stdc++.h>
    using namespace std;
    #define int long long

    signed main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int t; cin >> t;
        while(t--) {
            int s, x, y, z;
            cin >> s >> x >> y >> z;
            int unused = s - x - y;
            int mx = max(x, y);
            if(unused >= z)
                cout << "0\n";
            else if(unused == 0 && z <= mx)
                cout << "1\n";
            else if(unused == 0 && z > mx)
                cout << "2\n";
            else { //unused < z
                if(unused + mx >= z)
                    cout << "1\n";
                else 
                    cout << "2\n";
            }
        }

        return 0;
    }