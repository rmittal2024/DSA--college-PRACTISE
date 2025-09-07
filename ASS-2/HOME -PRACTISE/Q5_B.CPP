//Q- Tri-diagonal Matrix.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of square matrix: ";
    cin >> n;

    int tri[1000];
    cout << "Enter " << 3*n-2 << " non-zero tri-diagonal elements: ";
    for (int i = 0; i < 3*n-2; i++) cin >> tri[i];

    cout << "Tri-diagonal Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << tri[k++] << " ";
            else if (i == j+1) cout << tri[k++] << " ";
            else if (i+1 == j) cout << tri[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
