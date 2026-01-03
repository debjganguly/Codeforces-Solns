#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (k >= 2) {
            cout << "YES\n";
        } else {
            int isSorted = 1;

            for (int i = 0; i < n - 1; i++) {
                if (a[i] > a[i + 1]) {
                    isSorted = 0;
                    break;
                }
            }

            if (isSorted == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}
