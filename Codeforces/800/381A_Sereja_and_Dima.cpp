#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> cards(n);
    for(int i=0; i<n; i++) {
        cin >> cards[i];
    }
    int l=0, r = n-1;
    int sereja = 0, dima = 0;
    bool turn = true;

    while(l<=r) {
        int choice;
        if(cards[l] > cards[r]){
            choice = cards[l++];
        }
        else {
            choice = cards[r--];
        }

        if(turn) {
            sereja += choice;
        }
        else {
            dima += choice;
        }

        turn = !turn;
    }

    cout << sereja << " " << dima << endl; 
    return 0;

}