#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size();

    // hash array to store frequency
    vector<int> hash(n + 1, 0);

    for (int i = 0; i < n; i++) {
        hash[a[i]]++;
    }

    int repeating = -1, missing = -1;

    for (int i = 1; i <= n; i++) {
        if (hash[i] == 2)
            repeating = i;
        else if (hash[i] == 0)
            missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }

    return {repeating, missing};
}

int main() {
    vector<int> a = {4, 3, 6, 2, 1, 1}; 

    vector<int> ans = findMissingRepeatingNumbers(a);

    cout << "Repeating: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;

    return 0;
}
