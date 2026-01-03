#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++) {
        int n;
        cin >> n;
        int arr[n];

        bool isEven=false;
        bool isOdd=false;
        
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i]%2==0) isEven=true;
            else isOdd=true;
        }

        if(isEven==true && isOdd==true) {
            for(int i=0;i<n-1;i++) {
                int min=i;
                for(int j=i+1;j<n;j++) {
                    if(arr[j]<arr[min]) min=j;
                }

                int temp =arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
        }

        

        for(int i=0;i<n;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

    }
}