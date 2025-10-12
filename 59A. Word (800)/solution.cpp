#include <bits/stdc++.h>
using namespace std;

int main() {

    // Initialising the Variables
    string s; // Word
    char ch; // Each Character of Word
    int len, // Length of String
          i // Looping Constant
    ;

    // Storing the Word
    cin >> s;
    len = s.size(); // Size of Word

    // Seeing if max chars are small or caps
    int caps=0, lows=0;
    for(i=0;i<len;i++) {
        ch=s[i];
        if(ch>='a' && ch<='z') {lows++;}
        else if(ch>='A' && ch<='Z') {caps++;}
    }

    // Converting the String
    if(caps>lows) {
        for(int i=0;i<len;i++) {
            s[i]=toupper(s[i]);
        }
    }
    if(lows>caps || caps==lows) {
        for(int i=0;i<len;i++) {
            s[i]=tolower(s[i]);
        }
    }

    // Printing the Corrected String
    cout << s;

}