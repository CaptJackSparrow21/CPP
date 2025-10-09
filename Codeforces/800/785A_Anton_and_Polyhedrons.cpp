#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long count  = 0;

    for(int i=0; i<n; i++) {
        string polygon;
        cin >> polygon;

        if (polygon == "Tetrahedron") count += 4;
        if (polygon == "Cube") count += 6;
        if (polygon == "Octahedron") count += 8;
        if (polygon == "Dodecahedron") count += 12;
        if (polygon == "Icosahedron") count += 20;
    }
    cout << count << endl;
}