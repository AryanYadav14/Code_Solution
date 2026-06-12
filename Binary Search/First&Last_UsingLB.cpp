#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

pair<int,int> firstAndLastOccurrence(vector<int>& arr, int x) {
    int n = arr.size();

    int lb = lowerBound(arr, n, x);

    // element does not exist
    if (lb == n || arr[lb] != x) {
        return {-1, -1};
    }

    int ub = upperBound(arr, n, x);

    return {lb, ub - 1};
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};

    int x = 2;

    auto ans = firstAndLastOccurrence(arr, x);

    cout << ans.first << " " << ans.second << endl;
}




// STL Approach to do this question
/* 
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int x = 2;

    int n = arr.size();

    int lb = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    int ub = upper_bound(arr.begin(), arr.end(), x) - arr.begin();

    if (lb == n || arr[lb] != x) {
        // element not present
        cout << "-1 -1\n";
    } else {
        // element present
        cout << lb << " " << ub - 1 << "\n";
    }
}
 */