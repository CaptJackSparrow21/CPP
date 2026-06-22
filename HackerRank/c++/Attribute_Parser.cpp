#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, q;
    cin >> n >> q;
    cin.ignore();
    
    unordered_map<string, string> mp;
    vector<string> stack;
    
    while(n--) {
        string line;
        getline(cin, line);
        
        if(line.substr(0, 2) == "</")
            stack.pop_back();
        else {
            line = line.substr(1, line.size()-2);
            
            stringstream ss(line);
            string tag;
            ss >> tag;
            
            stack.push_back(tag);
            
            string path = "";
            
            for(int i=0; i<stack.size(); i++) {
                if(i)
                    path += ".";
                path += stack[i];
            }
            
            string attr, eq, val;
            while(ss >> attr >> eq >> val) {
                val = val.substr(1, val.size()-2);
                string key = path + "~" + attr;
                mp[key] = val;
            }
        }
    }
    
    while(q--) {
        string query;
        cin >> query;
        
        if(mp.count(query))
            cout << mp[query] << '\n';
        else
            cout << "Not Found!" << '\n';
    }
    
    return 0;
}
