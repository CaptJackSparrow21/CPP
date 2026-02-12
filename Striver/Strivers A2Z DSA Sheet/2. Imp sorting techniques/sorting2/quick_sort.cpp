#include<bits/stdc++.h>
using namespace std;

class Solution {
    public : 
        void quickSort(vector<int> &arr, int low, int high) {
            if(low < high) {
                int pivot = arr[low]; // pivot -> first element
                int i = low - 1;
                int j = high + 1; 
            

           while(true) {
                //find element >= pivot
                do{
                    i++;
                } while(arr[i] < pivot);

                //find element <=pivot
                do{
                    j--;
                } while(arr[j] > pivot);

                //if crossed partition done
                if( i >= j) {
                    break;
                } 

                swap(arr[i], arr[j]);
           }

           //recursively sort two halves
           quickSort(arr, low, j);
           quickSort(arr, j+1, high);
            }
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr;
    int n;
    string line;
    getline(cin, line);

    stringstream ss(line);
    while(ss >> n) arr.push_back(n);

    Solution s;
    s.quickSort(arr, 0, arr.size()-1);

    cout << "Sorted array : \n";
    cout << "[ ";
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "]";

    return 0;
}