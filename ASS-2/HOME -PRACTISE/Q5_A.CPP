//Q - Diagonal Matrix. 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of square matrix: ";
    cin >> n;

    int diag[100];
    cout << "Enter diagonal elements: ";
    for (int i = 0; i < n; i++) cin >> diag[i];

    cout << "Diagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << diag[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
