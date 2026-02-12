#include<bits/stdc++.h>
using namespace std;

#define ll long long
class Solution {
public:
    int paint(int A, int B, vector<int>& C) {
        ll num = 10000003;
        ll low = *max_element(C.begin(), C.end());
        ll high = accumulate(C.begin(), C.end(), 0LL);

        low *= (ll)B;
        high *= (ll)B;

        while(low < high) {
            int mid = low + (high - low) / 2;
            if(isPossible(A, (mid / B), C)) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }
        return low % num;
    }

    bool isPossible(int A, int limit, const vector<int> C) {
        ll painters = 1;
        ll currTime = 0;

        for(ll length : C) {
            if(currTime + length <= (ll)limit) {
                currTime += length;
            }
            else {
                painters++;
                currTime = length;
                if(painters > (ll)A) return false;
            }
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;
    cin.ignore();
    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    string temp;
    vector<int> C;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            C.push_back(stoi(temp));
        }
    }

    Solution s;
    cout << s.paint(A, B, C) << endl;
    return 0;
}