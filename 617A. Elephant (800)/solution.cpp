#include <iostream>
using namespace std;

int main() {
    // Asking for x
    int x;
    cin >> x;

    // Calculating the ans
    int num=x/5;
    int rem=x%5;

    int sum=num;
    if(rem>0 && rem<5) {sum+=1;}

    cout << sum;
}