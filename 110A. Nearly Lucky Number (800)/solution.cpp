#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    
    int a=0, i=0;
    
    while(s[i]!='\0') {
         if((s[i]=='4' || s[i]=='7')) { 
           a++;
         }
         i++;
    }
    
    if(a==4 || a==7) {cout << "YES";}
    else { cout << "NO";}
}