#include <bits/stdc++.h>
using namespace std;

int findRotationCount(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If search space is already sorted
        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                ans = arr[low];
                index = low;
            }
            break;
        }

        // Left half is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] < ans) {
                ans = arr[low];
                index = low;
            }
            low = mid + 1;
        }
        // Right half is sorted
        else {
            if (arr[mid] < ans) {
                ans = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }

    return index;   // number of rotations
}
