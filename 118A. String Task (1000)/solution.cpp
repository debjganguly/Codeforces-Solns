#include <iostream>
#include <string>
using namespace std;

int main() {

    // Entering the string
    string s;
    cin >> s;
    int len=s.size(); // Length of String

    // Step 1: aLl to LowerCase
    for (char &c : s) {
        c = tolower(c);
    }

    // Step 2: Remove Vowels
    int i=0;
    while(s[i]!='\0') {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='y' || s[i]=='o' || s[i]=='u') {
            s.erase(i,1);
        } else {i++;}
    }

    // Step 3: Add full stops before consonants
    i=0;
    while(s[i]!='\0') {
        if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='y' || s[i]=='o' || s[i]=='u')) {
            s.insert(i,1,'.');
            i+=2;
        } else {i++;}
    }

    cout << s;
}