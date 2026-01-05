    #include<bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t; cin >> t;
        while(t--) {
            int n; cin >> n;
            vector<int> a(n);
            int cnt2 = 0;
            for(int i=0; i<n; i++) {
                cin >> a[i];
                if(a[i] == 2) cnt2++;
            }

            if(cnt2 % 2 == 1) {
                cout << -1 << endl;
                continue;
            }
            else if(cnt2 ==0) {
                cout << 1 << endl;
                continue;
            }
            else {
                int need = cnt2 / 2;
                int curr2 = 0;
                for(int i=0; i<n; i++) {
                    if(a[i] == 2) curr2++;
                    if(curr2 == need) {
                        cout << i + 1 << endl;
                        break;
                    }
                }
            }
        }

        return 0;
    }