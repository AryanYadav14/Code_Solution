#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If the current search space is already sorted
        if (arr[low] <= arr[high]) {
            ans = min(ans, arr[low]);
            break;
        }

        // Left half is sorted
        if (arr[low] <= arr[mid]) {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        // Right half is sorted
        else {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }

    return ans;
}
