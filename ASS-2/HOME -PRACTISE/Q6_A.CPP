//Q Transpose of a matrix. 

#include <iostream>
using namespace std;

int main() {
    int r, c, n;
    cout << "Enter rows, cols, and number of non-zero elements: ";
    cin >> r >> c >> n;

    int sparse[100][3];
    cout << "Enter triplets (row col value):\n";
    for (int i = 0; i < n; i++)
        cin >> sparse[i][0] >> sparse[i][1] >> sparse[i][2];

    cout << "Transpose of Sparse Matrix (triplets):\n";
    for (int i = 0; i < n; i++) {
        cout << sparse[i][1] << " " << sparse[i][0] << " " << sparse[i][2] << endl;
    }
    return 0;
}
