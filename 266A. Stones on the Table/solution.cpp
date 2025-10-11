#include <iostream>
using namespace std;

int main() {

    // STORING LENGTH
    int len;
    cin >> len;

    // STORING STRING AS S
    string s;
    cin >> s;

    // STORING THE REQUIRED COUNT WHICH STARTS WITH BEING INITIALISED AS 0
    int count=0;
    for(int i=0;i<len-1;i++) {
        if(s[i]==s[i+1]) {
            count++;
        }
    }

    cout << count;
}