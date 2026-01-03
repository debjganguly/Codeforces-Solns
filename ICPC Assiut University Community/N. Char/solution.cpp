#include <bits/stdc++.h>
using namespace std;

int main() {
    char x;
    cin >> x;

    if(x-'a'>= 0) cout << char(x-32);
    else cout << char(x+32);
}