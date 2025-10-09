#include <bits/stdc++.h>
using namespace std;

int solve(string a, string b) {
    int count =0;
    for(int i=0; i<=a.length();i++){
            if(tolower (a[i]) > tolower (b[i]))
                return 1;
            else if(tolower(a[i]) < tolower(b[i]))
                return -1;
            else
                count++;
    }
    if(count = a.length())
        return 0;
}

int main() {
    string a,b;
    cin >> a >> b;
    cout << solve(a,b);

    return 0;
}