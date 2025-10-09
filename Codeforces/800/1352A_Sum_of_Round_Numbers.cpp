    #include<bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int t;
        if(!(cin >> t)) return 0;

        while (t--) {
            long long n;
            cin >> n;
            vector<long long> parts;
            int place = 1;
        
            while(n > 0) {
                int d = n % 10;
                if(d) parts.push_back(d * place);
                n /= 10;
                place *= 10;
            }
            cout <<  parts.size() << endl;
            reverse(parts.begin(), parts.end());
            for(long long x : parts) {
                cout << x << " " ;
            }
            cout << endl;
        }
        return 0;
    }