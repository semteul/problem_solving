#include <bits/stdc++.h>
using namespace std;

int a[100001];

void f() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int x,y;
        cin >> x;
        cin >> y;
        a[x] = y;
    }

    int c = 0;
    for(int i=2;i<=n;i++) {
        if(a[i] > a[i-1]){
            a[i] = a[i-1];
            c++;
        }
    }
    cout << n-c << '\n';
}

int main(void) {
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
        f();
    
    return 0;
}