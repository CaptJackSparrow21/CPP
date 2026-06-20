//https://takeuforward.org/plus/dsa/problems/flood-fill-algorithm?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n * m)
class Solution {
public:
    void dfs(int r, int c, vector<vector<int>> &image,
             int oldColor, int newColor) {
        int n = image.size();
        int m = image[0].size();

        image[r][c] = newColor;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for(int k=0; k<4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr >= 0 && nr < n && nc >= 0 && nc < m
                && image[nr][nc] == oldColor) {
                dfs(nr, nc, image, oldColor, newColor);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, 
                        int sr, int sc, int newColor) {

        int oldColor = image[sr][sc];
        if(oldColor == newColor)
            return image;
        
        dfs(sr, sc, image, oldColor, newColor);
        return image;
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

    cout << '[';
    for(int i=0; i<ans.size(); i++) {
        cout << '[';
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j];
            if(j+1 < ans[i].size())
                cout << ",";
        }
        cout << ']';
        if(i + 1 < ans.size()) 
            cout << ",";
    }
    cout << ']';

    return 0;
}