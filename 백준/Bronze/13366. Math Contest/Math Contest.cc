#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string str;
    cin >> t;
    getchar();
    for(int i=0;i<t;i++) {
        char c;
        int a=0;
        while((c=getchar()) >= '0' && c <='9') {
            a+=c-'0';
        }
        if(a%9 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}