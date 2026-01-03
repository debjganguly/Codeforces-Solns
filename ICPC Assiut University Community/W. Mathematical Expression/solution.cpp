#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    if((s=='+'||s=='-'||s=='*') && q=='=') {
        int tempc;
        switch(s) {
            case '+': tempc=a+b; break;
            case '-': tempc=a-b; break;
            case '*': tempc=a*b; break;
        }
        if(tempc==c) cout << "Yes";
        else cout << tempc;
    }
}
