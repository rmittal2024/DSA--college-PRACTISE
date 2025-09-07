//Q- Upper triangular Matrix. 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of square matrix: ";
    cin >> n;

    int upper[1000];
    cout << "Enter " << (n*(n+1))/2 << " upper triangular elements: ";
    for (int i = 0; i < (n*(n+1))/2; i++) cin >> upper[i];

    cout << "Upper Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) cout << upper[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
