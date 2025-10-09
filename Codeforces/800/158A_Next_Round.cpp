#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int count = 0;
    int nums[n];

    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    
    for (int j=0; j<n; j++){
        if (nums[j] >= nums[k-1] && nums[j] >0){
            count++;
        }
    }
    cout << count;  
}