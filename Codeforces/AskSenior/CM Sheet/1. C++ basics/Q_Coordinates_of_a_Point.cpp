#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x, y;
    cin >> x >> y;

    if(x==0 && y==0)
        cout << "Origem";
    else if(x==0 && y!=0)
        cout << "Eixo Y";
    else if(x!=0 && y==0)
        cout << "Eixo X";
    else if(x>0 && y>0)
        cout << "Q1";
    else if(x<0 && y>0)
        cout << "Q2";
    else if(x<0 && y<0)
        cout << "Q3";
    else 
        cout << "Q4";

    return 0;
}