// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string a, b, c;
//     if(!getline(cin , a)) return 0;
//     getline (cin , b);
//     getline (cin , c);

//     int cnt[26] = {};

//     for(char ch : a) cnt[ch - 'A']++;
//     for(char ch : b) cnt[ch - 'A']++;
//     for(char ch : c) cnt[ch - 'A']--;

//     for(int i=0; i<26; i++) {
//         if(cnt[i] != 0) {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }
//     cout << "YES" << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,s1,s2,snew;
    cin >> s1 >> s2 >> s;

    int a = s1.size();
    int b = s2.size();
    int c = s.size();

    if(a+b != c) {
        cout << "NO" << endl;
        return 0;
    }
    else {
        snew = s1 + s2;

        sort(s.begin(), s.end());
        sort(snew.begin(), snew.end());

        if(s == snew) {
            cout << "YES" << endl;
            return 0;
        } 
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
}