#include <iostream>
using namespace std;

int check(int a, int b, int c) {
    if((a+b+c) >=2) return true;
    else return false;
}

int main() {
    int n;
    cin >> n;
    int arr[3], count=0;
    for(int i=0;i<n;i++) {
        cin >> arr[0];
        cin >> arr[1];
        cin >> arr[2];
        if(check(arr[0],arr[1],arr[2])==true) count++;
    }
    cout << count;
}