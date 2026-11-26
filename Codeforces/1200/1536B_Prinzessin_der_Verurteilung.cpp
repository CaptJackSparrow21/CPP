#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        unordered_set<string> st;

        for(int len=1; len<=3; len++) {
            for(int i=0; i+len<=n; i++) {
                st.insert(s.substr(i, len));
            }
        }

        string ans;

        for(int len=1; len<=3; len++) {
            bool found = false;

            if(len == 1) {
                for(char a = 'a'; a <= 'z'; a++) {
                    string x;
                    x += a;

                    if(!st.count(x)) {
                        ans = x;
                        found = true;
                        break;
                    }
                }
            }

            else if(len == 2) {
                for(char a = 'a'; a <= 'z'; a++) {
                    for(char b = 'a'; b <= 'z'; b++) {
                        string x;
                        x += a;
                        x += b;

                        if(!st.count(x)) {
                            ans = x;
                            found = true;
                            break;
                        }
                    }
                    if(found)
                        break;
                }
            }

            else if(len == 3) {
                for(char a = 'a'; a <= 'z'; a++) {
                    for(char b = 'a'; b <= 'z'; b++) {
                        for(char c = 'a'; c <= 'z'; c++) {
                            string x;
                            x += a;
                            x += b;
                            x += c;

                            if(!st.count(x)) {
                                ans = x;
                                found = true;
                                break;
                            }
                        }
                        if(found)
                            break;
                    }
                    if(found)
                        break;
                }
            }
            if(found)
                break;
        }
        cout << ans << '\n';
    }

    return 0;
}