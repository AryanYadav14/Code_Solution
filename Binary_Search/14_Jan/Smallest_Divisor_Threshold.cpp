#include <bits/stdc++.h>
using namespace std;

int sumByD(vector<int>& arr, int div) {
    int sum = 0;
    for (int x : arr) {
        sum += ceil((double)x / (double)div);
    }
    return sum;
}

int smallestDivisor(vector<int>& arr, int limit) {
    int n = arr.size();
    if (n > limit) return -1;

    int low = 1;
    int high = *max_element(arr.begin(), arr.end());

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (sumByD(arr, mid) <= limit) {
            high = mid - 1;   // valid → try smaller (lower bound)
        } else {
            low = mid + 1;    // invalid → increase divisor
        }
    }
    return low;
}

int main() {
    vector<int> arr = {1, 2, 5, 9};
    int limit = 6;

    cout << smallestDivisor(arr, limit) << endl;
    return 0;
}
