//https://takeuforward.org/plus/dsa/problems/flood-fill-algorithm?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, 
                        int sr, int sc, int newColor) {

    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int sr, sc, newColor;
    cin >> sr >> sc >> newColor;

    vector<vector<int>> image;
    vector<int> curr_row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;

        if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                image.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    vector<vector<int>> ans = 
                        sol.floodFill(image, sr, sc, newColor);

    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++) {
            cout <<
        }
    }

    return 0;
}