//Q-  Symmetric Matrix 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of square matrix: ";
    cin >> n;

    int sym[1000];
    cout << "Enter " << (n*(n+1))/2 << " elements of lower triangle (including diagonal): ";
    for (int i = 0; i < (n*(n+1))/2; i++) cin >> sym[i];

    cout << "Symmetric Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << sym[(i*(i+1))/2 + j] << " ";
            else cout << sym[(j*(j+1))/2 + i] << " ";
        }
        cout << endl;
    }
    return 0;
}
