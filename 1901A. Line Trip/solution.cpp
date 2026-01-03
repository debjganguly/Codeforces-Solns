#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++) {
        int n, x;
        cin >> n >> x;

        int arr[n];

        // Value Input
        for(int i=0;i<n;i++) cin >> arr[i];
        
        // Logic in action 🥷
        int max=0;

        max=arr[0]-0;
        for(int i=1;i<n;i++){
            int diff=arr[i]-arr[i-1];
            if(diff>max) max=diff;
        }
        int diff=2*(x-arr[n-1]);
        if(diff>max) max=diff;

        cout << max << endl;
    }
}