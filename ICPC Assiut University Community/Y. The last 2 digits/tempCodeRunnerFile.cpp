#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    cout << ((a%100)*(b%100)*(c%100)*(d%100))%100;
}