#include <bits/stdc++.h>
using namespace std;

int main() {
    float s;
    cin >> s;

    if(ceil(s)==floor(s)) cout << "int" << " " << int(s) << endl;
    else {
        cout << "float" << " " << floor(s) << " " <<setprecision(3)<< (s-floor(s)) << endl;
    }
}