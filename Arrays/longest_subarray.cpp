#include <iostream>
using namespace std;

int longestSubarrayWithSumK(int a[], int n, long long k) {

    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;

    while (right < n) {

        // shrink window if sum > k
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // check if sum == k
        if (sum == k) {
            int len = right - left + 1;
            if (len > maxLen) {
                maxLen = len;
            }
        }

        // move right pointer
        right++;
        if (right < n) {
            sum += a[right];
        }
    }

    return maxLen;
}

int main(){

    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long k = 3;

    cout << "Length of longest subarray with sum " << k << " is: " << longestSubarrayWithSumK(arr, n, k) << endl;

    return 0;
}