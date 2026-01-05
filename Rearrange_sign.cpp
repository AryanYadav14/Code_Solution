#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    int n = arr.size();

    vector<int> pos, neg;
    int p = 0, q = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos.push_back(arr[i]);
            p++; 
        } else {
            neg.push_back(arr[i]);
            q++;   
        }
    }

    int i = 0, j = 0, k = 0;
    while (i < p && j < q) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    while (i < p) {
        arr[k++] = pos[i++];
    }
    while (j < q) {
        arr[k++] = neg[j++];
    }

    for (auto it : arr) {
        cout << it << " ";
    }

    return 0;
}
