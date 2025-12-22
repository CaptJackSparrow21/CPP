#include<bits/stdc++.h>
using namespace std;

//Optimal approach
class Solution{	
	public:
		bool anagramStrings(string& s,string t){
			if(s.size() != t.size()) return false;
            int count[26] = {0};
            for(int i=0; i<s.size(); i++) {
                count[s[i] - 'a']++;
                count[t[i] - 'a']--;
            }

            for(int i=0; i<26; i++) {
                if(count[i] != 0) return false;
            }
            return true;
		}
};

//Sorting
// class Solution{	
// 	public:
// 		bool anagramStrings(string& s,string t){
// 			if(s.size() != t.size()) return false;
//             sort(s.begin(), s.end());
//             sort(t.begin(), t.end());

//             if(s == t) return true;
//             else return false;
// 		}
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;
    Solution sol;
    if(sol.anagramStrings(s, t)) cout << "True\n";
    else cout << "False\n";

    return 0;
}