#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    int n;
    cin >> n;
    cin >> s;
    
    int cA=0,cD=0,i=0;
    char ch;
    
    for(i;i<n;i++) { 
       if(s[i]=='A') {cA++;}
       else if(s[i]=='D') {cD++;}
    }
    
    if(cA>cD) cout << "Anton";
    else if(cA<cD) cout << "Danik";
    else cout << "Friendship";
}