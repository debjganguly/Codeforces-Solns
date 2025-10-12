#include <bits/stdc++.h>
using namespace std;

int main() {

    // Initialising the Integers
    int k, // Amount in Dollars
    w, // No. of Bananas in Shop
    i, // Iterating constant
    n; // Total dollars with him

    // Asked for money he will need to borrow
    cin >> k >> n >> w;
    
    // Now calculating the total money needed
    int total=0; // Total Money
    for(i=1;i<=w;i++) {
        total+=i*k;
    }

    // Money needed to Borrow
    int borrow = total-n;

    // Logical Printing
    if(borrow<=0) {cout << 0;}
    else {cout << borrow;}
}