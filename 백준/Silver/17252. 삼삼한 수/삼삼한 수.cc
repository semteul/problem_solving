#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n;
    cin >> n;
    if(n==0){
        cout << "NO";
        return 0;
    }

    while(n>0) {
        if(n%3 == 1) {
            n-=1;
            n/=3;
        } else if(n%3==0) {
            n/=3;
        } else {
            cout << "NO";
            return 0;
        } 
    }
    cout << "YES";
    return 0;
}