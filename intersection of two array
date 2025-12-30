#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 2, 3, 3, 4, 5};
    int B[] = {2, 3, 3, 5, 6, 6, 7};

    int n1 = sizeof(A) / sizeof(A[0]);
    int n2 = sizeof(B) / sizeof(B[0]);

    int inter[100];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (A[i] == B[j] && (inter[k - 1] != B[j])) {
                inter[k] = B[j];
                cout << inter[k] << " ";
                k++;
            }
        }
    }

    return 0;
}
