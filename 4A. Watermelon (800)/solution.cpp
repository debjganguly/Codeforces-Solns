#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking number as input
    int n;
    cin >> n;

    // Logic
    if((n/2)%2==0 && n>2 && n%2==0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}