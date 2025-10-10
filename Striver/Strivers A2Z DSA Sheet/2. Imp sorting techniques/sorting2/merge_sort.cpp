#include<bits/stdc++.h>
using namespace std;

class Solution {
    public : 
        void mergePass(vector<int> &a, vector<int> &b, vector<int> &c) {
            int m = a.size() , n = b.size();
            int i=0, j=0, k=0;

            while(i<m && j<n) {
                if(a[i] < b[j]) c[k++] = a[i++];
                else c[k++] = b[j++];
            }

            while(i<m) c[k++] = a[i++];
            while(j<n) c[k++] = b[j++];
        }

        // l -> lower bound ; r -> upper bound
        void mergeSort(vector<int> &nums, int l, int r) {
            if(l < r) {
                int mid = (l + r) / 2;

                //left subarray
                vector<int>left(mid - l + 1);
                for(int i=l; i<=mid; i++) {
                    left[i-l] = nums[i];
                }

                //right subarray
                vector<int> right(r - mid);
                for(int i = mid+1; i<=r; i++) {
                    right[i-(mid+1)] = nums[i];
                }

                // recursive calls
                mergeSort(left, 0, left.size()-1);
                mergeSort(right, 0, right.size()-1);

                // merge results
                vector<int> merged(r-l+1);
                mergePass(left, right, merged);

                //copy back into nums
                for(int i=0; i<merged.size(); i++) {
                    nums[l+i] = merged[i];
                }
            }
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector<int> nums;
    string line;
    getline(cin, line);

    stringstream ss(line);
    while(ss >> n) nums.push_back(n);

    if(nums.empty()) {
        cout << "Wrong input";
        return 0;
    }

    int size = nums.size() - 1;
    Solution s;
    s.mergeSort(nums, 0, size);

    cout << "[ ";
    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << "]";

    return 0;
}