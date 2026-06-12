#include <iostream>
using namespace std;

int main() {

    int A[] = {1,1,2,3,3,4,4};
    int n = sizeof(A) / sizeof(A[0]);

    int maxi = A[n - 1];   // direct max (array is sorted)

    int visited[maxi + 1] = {0};

    for(int i = 0; i < n; i++) {
        visited[A[i]]++;
    }

    for(int i = 0; i <= maxi; i++) {
        if(visited[i] == 1) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
