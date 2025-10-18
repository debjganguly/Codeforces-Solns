#include <bits/stdc++.h>
using namespace std;

int main () {
    string s,t;
    cin >> s >> t;
    int c=1;
    for(int i=0;i<s.size();i++) { 
       if(s[i]!=t[s.size()-1-i]) {c=0; break;}
    }
    
    if(c==0 || s.size()!=t.size()) {cout << "NO";}
    else {cout << "YES";}
}