#include <iostream>
using namespace std;

int main() {
    int num=0;
    int a;
    cin >> a;
    string n;
    for(int i=0;i<a;i++) {
        cin >> n;
        if(n=="++X" || n=="X++") num++;
        else if(n=="--X" || n=="X--")  num--;
    }
    cout << num;
}