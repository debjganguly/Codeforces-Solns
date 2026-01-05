#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++) {
        int n;
        cin >> n;

        int arr[n];

        bool is_greater_than_n = false;

        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i]>n) is_greater_than_n=true;
        }

        int min=0;
        for(int i=0;i<n;i++) {
            if(arr[i]<arr[min]) min=i;
        }

        if(is_greater_than_n==true) cout << "NO";
        else if(i==1) cout << "YES";
        else cout << "NO";

        cout << endl;
    }
}