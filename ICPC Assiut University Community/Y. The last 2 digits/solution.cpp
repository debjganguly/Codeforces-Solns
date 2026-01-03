#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    long num = ((a%100)*(b%100)*(c%100)*(d%100));

    
    char s1=('0'+num%10);
    num/=10;
    char s2=('0'+num%10);

    cout << s2 << s1;
}
