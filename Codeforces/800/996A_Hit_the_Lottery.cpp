#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long count = 0;
    int bills[] = {100, 20, 10, 5, 1};

    for(int b : bills) {
        count += n /b;
        n %= b;
    }

    cout << count << endl;
}