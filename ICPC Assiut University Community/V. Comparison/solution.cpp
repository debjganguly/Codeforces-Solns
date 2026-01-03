#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    char c;

    cin >> a >> c >> b;
    if(c=='>' || c=='<' || c=='=') {
        switch(c) {
            case '>': if(a>b) cout << "Right";
                      else cout << "Wrong";
                      break;
            case '<': if(a<b) cout << "Right";
                      else cout << "Wrong";
                      break;
            case '=':if(a==b) cout << "Right";
                      else cout << "Wrong";
                      break;
        }
    }
}