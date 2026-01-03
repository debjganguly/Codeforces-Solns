#include <bits/stdc++.h>
using namespace std;

int main() {
    string name1, name2, title1, title2;
    cin >> name1 >> title1;
    cin >> name2 >> title2;

    if(title1==title2) cout << "ARE Brothers";
    else cout << "NOT";
}