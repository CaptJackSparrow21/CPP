#include <bits/stdc++.h>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        map<string, string> phoneBook ;
        int n;
        cin >> n ;
        
        for(int i = 0; i<n; i++ ) {
            string name;
            string phone;
            cin >> name;
            cin >> phone;
            phoneBook[name] = phone;
        }
        map<string, string>:: iterator it;
        string query;
        while(cin >> query) {
            it = phoneBook.find(query);
            
            if(it != phoneBook.end()) {
                cout << it->first << "=" << it->second << endl;
            }
            else {
                cout << "Not found" << endl;
            }
        }
    return 0;
}
