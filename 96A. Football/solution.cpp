#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    
    int c0=0,c1=0,i=0;
    char ch;
    
    for(i;i<s.size();i++) { 
       if(s[i]=='0') {c0++;c1=0;}
       else if(s[i]=='1') {c1++;c0=0;}
       if(c0==7 || c1==7) break;
    }
    
    if(c0==7 || c1==7) cout << "YES";
    else cout << "NO";
}