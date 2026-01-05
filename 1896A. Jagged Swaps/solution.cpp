/*
Logic- Since we can swap a digit only if its greater than its neghbours 
       That means if we have lowest num anywhere other than at beginnng, we can't swipe it right ?
       beacuase everytime we find the lowest num, we can't swipe it so that lowest number anywhere other than 0 index is like
       a bone in our teeth
       so just do that .....
*/

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
        else if(min==0) cout << "YES";
        else cout << "NO";

        cout << endl;
    }
}