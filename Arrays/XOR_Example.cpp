#include <iostream>
using namespace std;

int main(){

    int A[] = {1,1,2,3,3,4,4};
    int n = sizeof(A) / sizeof(A[0]);

    int XOR = 0;
    for(int i = 0; i < n; i++){
        XOR = XOR ^ A[i];
    }
    cout << "The unique element is: " << XOR << endl;

    return 0;
}