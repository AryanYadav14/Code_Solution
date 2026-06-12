#include <iostream>
using namespace std;

int maxSubArray(int arr[], int n) {
    int currSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubArray(arr, n);
    cout << "Maximum Subarray Sum = " << result << endl;

    return 0;
}
