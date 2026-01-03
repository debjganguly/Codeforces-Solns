// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int fib1=0,fib2=1;
//     if(n==1) cout << fib1;
//     else if(n==2) cout << fib2;
//     else {
//         for(int i=3;i<=n;i++) {
//             int temp=fib2;
//             fib2+=fib1;
//             fib1=temp;
//         }
//         cout << fib2;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int num) {
    if(num==1) return 0;
    if(num==2) return 1;
    return fibonacci(num-1) + fibonacci(num-2);
}

int main() {
    int n;
    cin >> n;
    cout << (fibonacci(n));
}