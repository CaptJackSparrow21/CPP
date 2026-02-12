#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n = nums.size();
        long long s = (n * (n+1)) / 2; // expected sum
        long long s2 = (n * (n+1) * (2*n + 1)) / 6; // expected sum of squares

        long long s_actual = 0 , s2_actual = 0;
// s_actual = s + A - B;            s -> sum from 1 to n
// s2_actual = s2 + A*A - B*B;      s2 -> sum of squares from 1 to n

        for(int x : nums) {
            s_actual += x;
            s2_actual += (x*x);
        }

        long long diff1 = s_actual - s;    //A - B
        long long diff2 = s2_actual - s2;  //A*A - B*B = (A+B)(A-B)

        long long sumAB = diff2 / diff1;   // A+B

        int A = (diff1 + sumAB) / 2; //solving the equation
        int B = sumAB - A;

        return {A, B};
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    vector<int> nums;
    stringstream ss(input);
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    Solution s;
    vector<int> ans = s.findMissingRepeatingNumbers(nums);


    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i != ans.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}