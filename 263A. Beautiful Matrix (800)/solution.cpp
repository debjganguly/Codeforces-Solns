#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lim = 5;
    int arr[lim][lim];

    // Classic Input
    for(int i =0;i<lim;i++) {
        for(int j=0;j<lim;j++) {
            cin >> arr[i][j];
        }
    }

    // Finding 1
    int r,c;
    for(int i =0;i<lim;i++) {
        for(int j=0;j<lim;j++) {
            if(arr[i][j] == 1) {
                r = i, c =j;
            }
        }
    }

    // Logic
    cout << abs(r - 2) + abs(c - 2);
}