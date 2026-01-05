#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& a) {
    int n = a.size();
    int index = -1;

    // Step 1: find longest prefix match
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) {
            index = i;
            break;
        }
    }

    // Step 2: if no break point, reverse entire array
    if (index == -1) {
        reverse(a.begin(), a.end());
        return;
    }

    // Step 3: find element just greater than a[index]
    for (int i = n - 1; i > index; i--) {
        if (a[i] > a[index]) {
            swap(a[i], a[index]);
            break;
        }
    }

    // Step 4: reverse the suffix
    reverse(a.begin() + index + 1, a.end());
}

int main() {
    vector<int> a = {1, 3, 5, 4, 2};

    nextPermutation(a);

    for (auto it : a) {
        cout << it << " ";
    }
    return 0;
}
