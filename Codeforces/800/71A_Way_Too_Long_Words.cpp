#include <bits\stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n ;

    while(n--) {
        string text;
        cin >> text ;
        
        if(text.length() > 10) {
            cout << text[0] << text.length() - 2 << text[text.length() - 1] << "\n" ;
        }
        else {
            cout << text << "\n";
        }
    }
    return 0;
}