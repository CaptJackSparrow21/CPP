#include<bits/stdc++.h>
using namespace std;

//Binary Optimal Approach
class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
        int n1 = (int)arr1.size();
        int n2 = (int)arr2.size();

        if(n1 > n2) {
            swap(arr1, arr2);
            swap(n1, n2);
        }

        int low = 0, high = n1;
        int total = n1 + n2;

        while(low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = (total + 1) / 2 - cut1;

            int left1 = (cut1 == 0) ? INT_MIN : arr1[cut1 - 1];
            int right1 = (cut1 == n1) ? INT_MAX : arr1[cut1];

            int left2 = (cut2 == 0) ? INT_MIN : arr2[cut2 - 1];
            int right2 = (cut2 == n2) ? INT_MAX : arr2[cut2];

            if(left1 <= right2 && left2 <= right1) {
                if(total % 2 == 0) {
                    int mx = max(left1, left2);
                    int mn = min(right1, right2);
                    return (mx + mn) / 2.0;
                }
                else {
                    return (double) max(left1, left2);
                }
            }
            else if(left1 > right2) {
                high = cut1 - 1;
            }
            else {
                low = cut1 + 1;
            }
        }
        return 0.0;
    }
};

// Simple Approach 
// class Solution {
// public:
//     double median(vector<int> &arr1, vector<int> &arr2) {
//         int m = (int)arr1.size(), n = (int)arr2.size();
//         vector<int> merged(m+n);
//         int i=0, j=0, k=0;

//         while(i < m && j < n) {
//             if(arr1[i] <= arr2[j])
//                 merged[k++] = arr1[i++];
//             else 
//                 merged[k++] = arr2[j++];
//         }

//         while(i < m) merged[k++] = arr1[i++];
//         while(j < n) merged[k++] = arr2[j++];

//         int sz = merged.size();
//         int mid = sz /2 ;
//         if(sz % 2 != 0) {
//             return (double)merged[mid];
//         }
//         else {
//             return ((merged[mid - 1] + merged[mid]) / 2.0);
//         }
//     }
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input1;
    getline(cin, input1);
    //cin.ignore();
    string input2;
    getline(cin, input2);

    input1.erase(remove(input1.begin(), input1.end(), '['), input1.end());
    input1.erase(remove(input1.begin(), input1.end(), ']'), input1.end());

    input2.erase(remove(input2.begin(), input2.end(), '['), input2.end());
    input2.erase(remove(input2.begin(), input2.end(), ']'), input2.end());

    stringstream ss1(input1);
    string temp1;
    vector<int> arr1;
    while(getline(ss1, temp1, ',')) {
        if(!temp1.empty()) {
            arr1.push_back(stoi(temp1));
        }
    }

    stringstream ss2(input2);
    string temp2;
    vector<int> arr2;
    while(getline(ss2, temp2, ',')) {
        if(!temp2.empty()) {
            arr2.push_back(stoi(temp2));
        }
    }

    Solution s;
    cout << fixed << setprecision(1) << s.median(arr1, arr2) << endl;

    return 0;
}