#include<bits/stdc++.h>
using namespace std;

//Optimal binary Approach
class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
        int n1 = a.size(), n2 = b.size();
        if(n1 > n2) return kthElement(b, a, k);
        
        int low = max(0, k - n2);
        int high = min(k, n1);

        while(low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = k - cut1;

            int left1 = (cut1 == 0) ? INT_MIN : a[cut1 - 1];
            int right1 = (cut1 == n1) ? INT_MAX : a[cut1];
            int left2 = (cut2 == 0) ? INT_MIN : b[cut2 - 1];
            int right2 = (cut2 == n2) ? INT_MAX : b[cut2];

            if(left1 <= right2 && left2 <= right1) {
                return max(left1, left2);
            }
            else if(left1 > right2) {
                high = cut1 - 1;
            }
            else {
                low = cut1 + 1;
            }
        }
        return -1;
    }
};

// Normal Approach
// class Solution {
// public:
//     int kthElement(vector<int> &a, vector<int>& b, int k) {
//         int m = a.size(), n = b.size();
//         vector<int> merged(m+n);
//         int i=0, j=0, x=0;

//         while(i<m && j<n) {
//             if(a[i] <= b[j])
//                 merged[x++] = a[i++];
//             else 
//                 merged[x++] = b[j++];
//         }

//         while(i < m) merged[x++] = a[i++];
//         while(j < n) merged[x++] = b[j++];

//         return merged[k-1];
//     }
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input1;
    getline(cin, input1);
    string input2;
    getline(cin, input2);

    input1.erase(remove(input1.begin(), input1.end(), '['), input1.end());
    input1.erase(remove(input1.begin(), input1.end(), ']'), input1.end());

    input2.erase(remove(input2.begin(), input2.end(), '['), input2.end());
    input2.erase(remove(input2.begin(), input2.end(), ']'), input2.end());

    stringstream ss1(input1);
    string temp1;
    vector<int> a;
    while(getline(ss1, temp1, ',')) {
        if(!temp1.empty()) {
            a.push_back(stoi(temp1));
        }
    }

    stringstream ss2(input2);
    string temp2;
    vector<int> b;
    while(getline(ss2, temp2, ',')) {
        if(!temp2.empty()) {
            b.push_back(stoi(temp2));
        }
    }

    int k; cin >> k;
    Solution s;
    cout << s.kthElement(a, b, k) << endl;

    return 0;
}