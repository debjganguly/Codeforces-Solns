#include <bits/stdc++.h>
using namespace std;

int main() {
    // INITIALISING VARIABLES
    int n,h;
    cin >> n >> h;

    // INITIALISING ARRAY
    int a[n];
    int c=0; //counter for logic calculation
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]>h) {c++;}
        c++;
    }

    // OUTPUT
    cout << c;
}