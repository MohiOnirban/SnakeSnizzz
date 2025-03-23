#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[15][15];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        for (int i = 0; i < n; i++) {
            int p = n - 1;
            for (int j = 0; j <= (n - 1) / 2; j++)
                swap(a[i][j], a[i][p--]);
        }
        for (int j = 0; j < n; j++) {
            int p = n - 1;
            for (int i = 0; i < (n - 1) / 2; i++)
                swap(a[i][j], a[p--][j]);
        }
        cout << "checking if printing all row or not" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}