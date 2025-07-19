// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//    int a,b,year=0;

//    cin >> a >> b;

//    while(a<=b) {
//     a*=3;
//     b*=2;
//     year++;
//    }

//    cout << year;
// }
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,n=1;

    cin >> a >> b;

    if(a==b) cout << 1;
    else {
        while((pow(3,n)*a<=pow(2,n)*b)) {
            n++;
        }
        cout << n;
    }
}