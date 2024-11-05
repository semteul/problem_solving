#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    char b[20];
    int a[20];

    cin >> k;

    for(int i=0;i<k;i++) {
        cin >> b[i];
    }

    for(int i=0;i<10;i++)
        a[i] = i;

    long long max=0;
    long long min=9999999999;

    do {
        bool flag=true;
        for(int i=0;i<k;i++) {
            if(b[i]=='<') {
                if(a[i]>a[i+1]){
                    flag=false;
                    break;
                }
            } else {
                if(a[i]<a[i+1]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag) {
            long long d=0;
            for(int i=0;i<k+1;i++) {
                d*=10;
                d+=a[i];
            }
            if(max < d) {
                max = d;
            }
            if(min > d) {
                min = d;
            }
        }
    } while (next_permutation(a,a+10));
    
    string str="";
    for(int i=0;i<k+1;i++) {
        str = to_string(max%10) + str;
        max/=10;
    }
    cout << str << endl;
    str="";
    for(int i=0;i<k+1;i++) {
        str = to_string(min%10) + str;
        min/=10;
    }
    cout << str << endl;


    return 0;
}