#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int count=0;

    for(int i=0;i<n;i++) {
        bool found = false;
        for(int j=0;j<i;j++) {
            if(s[i]==s[j]) {
                found=true;
                break;
            }
        }
        if(!found) count++;
    }

    if(count%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}