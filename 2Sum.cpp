#include <iostream>
using namespace std;

int main() {

    int A[] = {2, 6, 5, 8, 11};
    int n = sizeof(A) / sizeof(A[0]);
    int target = 14;

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {   // j starts from i+1
            if(A[i] + A[j] == target) {
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(found)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
