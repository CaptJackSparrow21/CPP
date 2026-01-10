#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int h = (s[0] - '0') * 10 + (s[1] - '0');
        string min = s.substr(3, 2);
        string format = (h < 12 ? "AM" : "PM");
        int disp = h % 12;
        if(disp == 0) disp = 12;
        cout << (disp < 10 ? "0" : "") << disp << ":" <<
                min << " " << format << endl;
    }

    return 0;
}