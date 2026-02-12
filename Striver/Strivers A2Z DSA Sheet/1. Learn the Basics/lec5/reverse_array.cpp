#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        void reverseArray(int arr[],  int n) {
            int left = 0;
            int right = n-1 ;
            while( left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    Solution s;
    s.reverseArray(arr, n);
    cout << "Reverse element of an array are : " << endl;
    cout << "[ ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " " ;
    }
    cout << "]";
    cout << endl;
    return 0;
}