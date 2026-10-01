//https://takeuforward.org/practice/dsa/trie-implementation-and-advanced-operations

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(L) && SC = O(C)
class Trie {
    struct Node {
        Node *child[26] {};
        bool isEnd = false;
        int cntEndWith = 0; //# exact words
        int cntPrefix = 0;  //#having this prefix
    };

    Node *root;

public :
    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node *curr = root;
        for(char c : word) {
            int i = c - 'a';

            if(!curr->child[i])
                curr->child[i] = new Node();

            curr = curr->child[i];
            curr->cntPrefix++;
        }
        curr->cntEndWith++;
    }

    int countWordsEqualTo(string word) {
        Node *curr = root;
        for(char c : word) {
            int i = c - 'a';
            if(!curr->child[i])
                return 0;

            curr = curr->child[i];
        }
        return curr->cntEndWith;
    }

    int countWordsStartingWith(string word) {
        Node *curr = root;
        for(char c : word) {
            int i = c - 'a';
            if(!curr->child[i])
                return 0;

            curr = curr->child[i];
        }
        return curr->cntPrefix;
    }

    void erase(string word) {
        if(countWordsEqualTo(word) == 0)
            return;

        Node *curr = root;
        for(char c : word) {
            int i = c - 'a';
            curr = curr->child[i];
            curr->cntPrefix--;
        }
        curr->cntEndWith--;
    }
};

vector<string> parse(string s) {
    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    vector<string> ans;
    string temp;
    stringstream ss(s);
    while(getline(ss, temp, ','))
        ans.push_back(temp);

    return ans;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string operations, values;
    getline(cin, operations);
    getline(cin, values);

    vector<string> op = parse(operations);
    vector<string> val = parse(values);

    Trie trie;
    cout << '[';

    int j = 0;
    for(int i=0; i<op.size(); i++) {
        if(op[i] == "Trie")
            cout << "null";
        else if(op[i] == "insert") {
            trie.insert(val[j++]);
            cout << "null";
        }
        else if(op[i] == "countWordsEqualTo")
            cout << trie.countWordsEqualTo(val[j++]);
        else if(op[i] == "countWordsStartingWith")
            cout << trie.countWordsStartingWith(val[j++]);
        else if(op[i] == "erase") {
            trie.erase(val[j++]);
            cout << "null";
        }

        if(i + 1 < op.size())
            cout << ',';
    }

    cout << ']';

    return 0;
}