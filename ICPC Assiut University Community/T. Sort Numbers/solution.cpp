#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;

    cin >> a >> b >> c;

    int max, min;

    max = a>b ? (a>c ? a:c):(b>c ? b:c);

    min = a<b ? (a<c ? a:c):(b<c ? b:c);

    cout << min << endl << (a+b+c-max-min) << endl << max << endl << endl;

    cout << a << endl << b << endl << c;
}