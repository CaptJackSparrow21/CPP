#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> gift_giver(n);

    for(int giver=1; giver<=n; giver++) {
        int receiver;
        cin >> receiver;
        //0 1 2 ....
        gift_giver[receiver - 1] = giver;
    }

    for(int receiver=0; receiver<n; receiver++) {
        cout << gift_giver[receiver] << " ";
    }
    return 0;
}
