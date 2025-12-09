#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long double minimiseMaxDistance(vector<int> &arr, int k) {
        double low = 0.0;
        double high = 0.0;

        for(int i=0; i+1<(int)arr.size(); i++) {
            high = max(high, (double)(arr[i+1] - arr[i]));
        }

        while(high - low > 1e-6) {
            double mid = low + (high - low) / 2.0;
            int need = requiredStations(arr, mid);
            if(need > k)
                low = mid;
            else 
                high = mid;
        }
        return high;
    }

    int requiredStations(const vector<int> arr, double dist) {
        int need = 0;
        for(int i=0; i+1<arr.size(); i++) {
            double gap = arr[i+1] - arr[i];
            need += (int)(gap / dist);
        }
        return need;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    string temp;
    vector<int> arr;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            arr.push_back(stoi(temp));
        }
    }

    int k; cin >> k;

    Solution s;
    cout << fixed << setprecision(6) << s.minimiseMaxDistance(arr, k) << endl;

    return 0;
}