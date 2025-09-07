//Q- Multiplication of two matrices. 

#include <iostream>
using namespace std;

int main() {
    int r1, c1, n1, r2, c2, n2;
    cout << "Enter rows, cols of A: ";
    cin >> r1 >> c1;
    cout << "Enter number of non-zero elements in A: ";
    cin >> n1;

    int A[100][3];
    cout << "Enter triplets for A:\n";
    for (int i = 0; i < n1; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    cout << "Enter rows, cols of B: ";
    cin >> r2 >> c2;
    cout << "Enter number of non-zero elements in B: ";
    cin >> n2;

    int B[100][3];
    cout << "Enter triplets for B:\n";
    for (int i = 0; i < n2; i++) cin >> B[i][0] >> B[i][1] >> B[i][2];

    if (c1 != r2) {
        cout << "Multiplication not possible\n";
        return 0;
    }

    int result[1000][3], k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (A[i][1] == B[j][0]) {
                int row = A[i][0], col = B[j][1], val = A[i][2] * B[j][2];
                bool found = false;
                for (int x = 0; x < k; x++) {
                    if (result[x][0] == row && result[x][1] == col) {
                        result[x][2] += val;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    result[k][0] = row;
                    result[k][1] = col;
                    result[k][2] = val;
                    k++;
                }
            }
        }
    }

    cout << "Result of A * B (triplets):\n";
    for (int i = 0; i < k; i++)
        if (result[i][2] != 0)
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;

    return 0;
}
