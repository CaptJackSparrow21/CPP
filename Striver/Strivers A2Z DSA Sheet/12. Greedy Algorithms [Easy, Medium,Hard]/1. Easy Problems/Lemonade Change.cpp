//https://takeuforward.org/plus/dsa/problems/lemonade-change?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    bool lemonadeChange(vector<int> &bills) {
        int five = 0, ten = 0;
        for(int bill : bills) {
            if(bill == 5)
                five++;
            else if(bill == 10) {
                if(five == 0)
                    return false;
                five--;
                ten++;
            }
            else {  //bill == 20
                if(ten > 0 && five > 0) {
                    ten--;
                    five--;
                }
                else if(five >= 3)
                    five -= 3;
                else 
                    return false;
            }
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    string temp;
    vector<int> bills;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            bills.push_back(stoi(temp));
    }

    Solution sol;
    cout << boolalpha << sol.lemonadeChange(bills);

    return 0;
}