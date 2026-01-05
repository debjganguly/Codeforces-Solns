#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++) {
        int n;
        cin >> n;

        char s[n];

        for(int i=0;i<n;i++) cin >> s[i];

        int is3=0,c=0;
        for(int i=0;i<n;i++) {
            char ch=s[i];
            if(ch=='.') {
                c++;
                if(s[i+1]=='.' && s[i+2]=='.') {
                    is3=1;
                }
            }
        }
        if(is3==1) {
            cout << 2 << endl;
        } else cout << c<< endl;
    }
}