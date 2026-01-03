#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    if(n>1){
        for(int i=2;i<n;i++) {
            if(n%i==0) {cout << "NO"; return 1;}
        }
    } else {cout << "NO"; return 1; }

    cout << "YES";
}