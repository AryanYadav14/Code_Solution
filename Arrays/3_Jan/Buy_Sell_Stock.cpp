#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(a) / sizeof(a[0]);

    int mini = a[0];
    int profit = 0;

    for (int i = 1; i < n; i++) {
        int cost = a[i] - mini;        
        profit = max(profit, cost);   
        mini = min(mini, a[i]);      
    }

    cout << profit << endl;       
    return 0;
}
