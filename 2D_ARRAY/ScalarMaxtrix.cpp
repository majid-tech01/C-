#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int arr[n][n];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    bool isScalar = true;
      // First diagonal element store

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            if(i == j) {
                if(arr[i][j] != arr[0][0]) {
                    isScalar = false;
                    break;
                }
            }
            else {
                if(arr[i][j] != 0) {
                    isScalar = false;
                    break;
                }
            }
        }
    }

    if(isScalar)
        cout << "Matrix is a Scalar Matrix";
    else
        cout << "Matrix is NOT a Scalar Matrix";
    cout<<"This is the matrix";
    return 0;
}