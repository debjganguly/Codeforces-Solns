#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string wordgen(string word) {
    if(word.size()>10)
    return word[0] + to_string(word.size()-2) + word[word.size()-1];
    else
    return word;
}
int main () {
    int n;
    cin >> n;
    string arr[n],newarr[n];
    for(int i = 0;i<n;i++) {
        cin >> arr[i];
        newarr[i]=wordgen(arr[i]);
    }
    for(int i = 0;i<n;i++) {
        cout << newarr[i] << endl;
    }
}