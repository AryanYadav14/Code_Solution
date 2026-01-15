#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int>& arr, int day, int r, int b) {
    int cnt = 0;     // consecutive bloomed roses
    int noOfB = 0;   // number of bouquets formed

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= day) {
            cnt++;
        } else {
            noOfB += (cnt / r);
            cnt = 0;
        }
    }
    noOfB += (cnt / r);

    return noOfB >= b;
}

int roseGarden(vector<int>& arr, int k, int m) {
    long long need = 1LL * k * m;
    if (need > arr.size()) return -1;

    int mini = INT_MAX, maxi = INT_MIN;
    for (int x : arr) {
        mini = min(mini, x);
        maxi = max(maxi, x);
    }

    int low = mini, high = maxi;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (possible(arr, mid, k, m)) {
            ans = mid;        // valid day
            high = mid - 1;   // try smaller day (lower bound)
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;   // roses per bouquet
    int m = 2;   // number of bouquets

    cout << roseGarden(arr, k, m) << endl;
    return 0;
}
