    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t; cin >> t;
        while(t--) {
            ll n; cin >> n;
            vector<int> a(n);
            int odd = 0, even = 0;
            for(int i=0; i<n; i++) {
                cin >> a[i];
                
                if(a[i] % 2 == 0) even++;
                else odd++;
            }

            if(even > 0 && odd > 0) {
                sort(a.begin(), a.end());
                for(int i : a) 
                    cout << i << " ";
            }
            else if(even == 0 || odd == 0) {
                for(int i : a)
                    cout << i << " ";
            }

            cout << endl;
        }

        return 0;
    }