#include <iostream>
using namespace std;

int majorityElement(int arr[], int n) {

    int cnt = 0;
    int el = 0;

    // Step 1: Find candidate
    for(int i = 0; i < n; i++) {
        if(cnt == 0) {
            cnt = 1;
            el = arr[i];
        }
        else if(arr[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }

    // Step 2: Verify candidate
    int cnt1 = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == el)
            cnt1++;
    }

    if(cnt1 > n / 2) {
        return el;
    }

    return -1; // no majority element
}

int main() {

    int arr[] = {2, 2, 3, 3, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = majorityElement(arr, n);

    if(ans != -1)
        cout << ans << endl;
    else
        cout << "No majority element" << endl;

    return 0;
}
