#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>scores(n);
    for(int i=0; i < n; i++) cin >> scores[i];

    int min_score = scores[0];
    int max_score = scores[0];
    int count = 0;

    for(int i=1; i<n; i++) {
        if(scores[i] > max_score) {
            count++;
            max_score = scores[i];
        }
        else if (scores[i] < min_score) {
            count++;
            min_score = scores[i];
        }
    }
    cout << count << endl;
    return 0;
}