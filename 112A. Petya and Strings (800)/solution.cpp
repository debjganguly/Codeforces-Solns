#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2;
    cin >> s1 >> s2;

    int num;
    if(s1.size()==s2.size()) {
        for(int i=0;i<s1.size();i++) {
            s1[i]=tolower(s1[i]);
            s2[i]=tolower(s2[i]);
            if(s1[i]<s2[i]) {
                num=-1;
                break;
            } else if (s1[i]>s2[i]) {
                num =1;
                break;
            } else { num=0; }
        }
    } 

    cout << num;
}