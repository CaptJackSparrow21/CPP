#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> one, two, three;

    for(int i=1; i<=n; i++) {
        int skill; cin >> skill;
        if(skill == 1) one.push_back(i);
        else if(skill == 2) two.push_back(i);
        else if(skill ==3 ) three.push_back(i);
    }
    int teams = min({(int)one.size(), (int)two.size(), (int)three.size()});
    cout << teams << endl;

    for(int i=0; i<teams; i++) {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }
    return 0;
}