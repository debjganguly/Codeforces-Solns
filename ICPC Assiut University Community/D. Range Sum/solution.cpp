    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        long long t;

        long long l,r;

        cin >> t;

        for(long long i=0;i<t;i++) {
            cin >> l >> r;
            if(l<=r)
            cout << (r*(r+1) - l*(l-1))/2 << endl;
            else 
            cout << (-r*(r-1) + l*(l+1))/2 << endl;
        }
    }