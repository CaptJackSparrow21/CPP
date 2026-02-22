//https://takeuforward.org/plus/dsa/problems/expression-add-operators

#include<bits/stdc++.h>
using namespace std;

//https://www.youtube.com/watch?v=GfxBod3HN9Y
//TC = O(4^n) (3 ops & digit choices)
//SC = O(n)
class Solution{
public:
    vector<string> ans;

    vector<string> addOperators(string s, int target) {
        backtrack(s, target, 0, "", 0, 0);
        return ans;
    }

    void backtrack(string s, int target, int i,
         const string &path, long eval, long residual) {
        // base condition
        if(i == s.size()) {
            if(eval == target) {
                ans.push_back(path);
                return;
            }
        }

        string currStr = "";
        long num = 0;
        //backtrack loop
        for(int j=i; j<s.size(); j++) {
            //handle 0
            if(j>i && s[i] == '0') return;
            currStr += s[j];
            num = num * 10 + s[j] - '0';

            if(i==0) {
                backtrack(s, target, j+1, path + currStr, num, num);
            }
            else {
                //+
                backtrack(s, target, j+1, path + "+" + currStr,
                            eval + num, num);
                //-
                backtrack(s, target, j+1, path + "-" + currStr,
                            eval - num, -num);
                //*
                backtrack(s, target, j+1, path + "*" + currStr,
                eval - residual + residual * num, residual * num);
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int target; cin >> target;

    Solution sol;
    vector<string> ans = sol.addOperators(s, target);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "\"" << ans[i] << "\"";
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}