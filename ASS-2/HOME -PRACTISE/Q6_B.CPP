//Q- Addition of two matrices. 

#include <iostream>
using namespace std;

int main() {
    int r, c, n1, n2;
    cout << "Enter rows, cols of matrix: ";
    cin >> r >> c;

    cout << "Enter number of non-zero elements in matrix A: ";
    cin >> n1;
    int A[100][3];
    cout << "Enter triplets for A:\n";
    for (int i = 0; i < n1; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    cout << "Enter number of non-zero elements in matrix B: ";
    cin >> n2;
    int B[100][3];
    cout << "Enter triplets for B:\n";
    for (int i = 0; i < n2; i++) cin >> B[i][0] >> B[i][1] >> B[i][2];

    cout << "Result of A + B (triplets):\n";
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (A[i][0] < B[j][0] || (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
            cout << A[i][0] << " " << A[i][1] << " " << A[i][2] << endl;
            i++;
        } else if (B[j][0] < A[i][0] || (A[i][0] == B[j][0] && B[j][1] < A[i][1])) {
            cout << B[j][0] << " " << B[j][1] << " " << B[j][2] << endl;
            j++;
        } else {
            int sum = A[i][2] + B[j][2];
            if (sum != 0) cout << A[i][0] << " " << A[i][1] << " " << sum << endl;
            i++; j++;
        }
    }
    while (i < n1) { cout << A[i][0] << " " << A[i][1] << " " << A[i][2] << endl; i++; }
    while (j < n2) { cout << B[j][0] << " " << B[j][1] << " " << B[j][2] << endl; j++; }

    return 0;
}
