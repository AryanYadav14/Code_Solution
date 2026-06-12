#include <bits/stdc++.h>
using namespace std;

void mergeArrays(long long arr1[], long long arr2[], int n, int m) {
    int left = n - 1;
    int right = 0;

    // swap out-of-order elements
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        } else {
            break;
        }
    }

    // sort both arrays
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main() {
    long long arr1[] = {1, 3, 5, 7};
    long long arr2[] = {0, 2, 6, 8, 9};

    int n = 4;
    int m = 5;

    mergeArrays(arr1, arr2, n, m);

    cout << "arr1: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\narr2: ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
