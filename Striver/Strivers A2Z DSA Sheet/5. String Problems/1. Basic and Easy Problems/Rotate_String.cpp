#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			if(s.size() != goal.size()) return false;

            return (s+s).find(goal) != string::npos;
		}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, goal;
    cin >> s >> goal;
    Solution sol;
    if(sol.rotateString(s, goal)) cout << "True\n";
    else cout << "False\n";

    return 0;
}