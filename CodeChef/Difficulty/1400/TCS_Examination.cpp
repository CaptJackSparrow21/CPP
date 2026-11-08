#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int dsa1, dsa2, toc1, toc2, dm1, dm2;
        cin >> dsa1 >> toc1 >> dm1;
        cin >> dsa2 >> toc2 >> dm2;

        int total1 = dsa1 + toc1 + dm1;
        int total2 = dsa2 + toc2 + dm2;

        auto dragon = make_tuple(total1, dsa1, toc1, dm1);
        auto sloth = make_tuple(total2, dsa2, toc2, dm2);

        if(dragon > sloth)
            cout << "DRAGON\n";
        else if(dragon < sloth)
            cout << "SLOTH\n";
        else 
            cout << "TIE\n";
    }

    // int t; cin >> t;
    // while(t--) {
    //     int dsa1, toc1, dm1, dsa2, toc2, dm2;
    //     cin >> dsa1 >> toc1 >> dm1;
    //     cin >> dsa2 >> toc2 >> dm2;

    //     int total1 = dsa1 + toc1 + dm1;
    //     int total2 = dsa2 + toc2 + dm2;

    //     if(total1 > total2)
    //         cout << "DRAGON\n";
    //     else if(total1 < total2)
    //         cout << "SLOTH\n";
    //     else {
    //         if(dsa1 > dsa2)
    //             cout << "DRAGON\n";
    //         else if(dsa1 < dsa2)
    //             cout << "SLOTH\n";
    //         else {
    //             if(toc1 > toc2)
    //                 cout << "DRAGON\n";
    //             else if(toc1 < toc2)
    //                 cout << "SLOTH\n";
    //             else {
    //                 if(dm1 > dm2)
    //                     cout << "DRAGON\n";
    //                 else if(dm1 < dm2)
    //                     cout << "SLOTH\n";
    //                 else 
    //                     cout << "TIE\n";
    //             }
    //         }
    //     }
    // }

    return 0;
}