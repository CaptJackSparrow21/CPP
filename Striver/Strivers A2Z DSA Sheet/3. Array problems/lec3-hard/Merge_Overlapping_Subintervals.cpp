#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;
        result.push_back(arr[0]);

        for(int i=1; i<arr.size(); i++) {
            vector<int> &last = result.back();
            vector<int> &curr = arr[i];
            
            if(curr[0] <= last[1]) {
                last[1] = max(last[1], curr[1]);
            }
            else {
                result.push_back(curr);
            }
        }
        return result;
    }
};

//function to parse [[a,b],[c,d],......] input from a string
vector<vector<int>> parseInput(const string &s) {
    vector<vector<int>> arr;
    int i=0, n = s.size();

    while(i < n) {
        if(s[i] == '[') {
            int a = 0, b = 0;
            i++;

            while(i < n && !isdigit(s[i])) i++;
            while(i < n && isdigit(s[i])) {
                a = a * 10 + (s[i] - '0');
                i++;
            }
            while(i < n && s[i] != ',' ) i++;
            i++;

            while(i < n && !isdigit(s[i])) i++;
            while(i < n && isdigit(s[i])) {
                b = b * 10 + (s[i] - '0');
                i++;
            }
            while(i < n && s[i] != ']') i++;
            if(i < n) i++;

            arr.push_back({a, b});
        } else {
            i++;
        }
    }
    return arr;
}

//output as [[a,b], [c,d],.....]
void
printOutput(const vector<vector<int>> &merged) {
    cout << "[";
    for(int i=0; i<merged.size(); i++) {
        cout << "[" << merged[i][0] << "," << merged[i][1] << "]";
        if(i != merged.size() - 1) cout << ",";
    }
    cout <<"]\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    vector<vector<int>> arr = parseInput(s);

    Solution sol;
    vector<vector<int>> merged = sol.mergeOverlap(arr);
    printOutput(merged);

    return 0;
}