#include <bits/stdc++.h>

using namespace std;

#define SIZE 5000001
bool s[SIZE];
bool p[SIZE];

int main() {
    int n;
    cin >> n;

    memset(s,1,sizeof(s));
    memset(p,1,sizeof(p));
    
    p[1] = false;

    // 소수 알고리즘
    for(int i=2;i<SIZE;i++) {
        if(s[i]) {
            for(int j=i*2;j<SIZE;j+=i) {
                s[j] = false;
            }

            // 팰린드롬 알고리즘
            char c[9];
            int k=i;
            int j=0;
            while(k>0) {
                c[j++] = k%10;
                k/=10;
            }
            for(k=0;k<j/2;k++) {
                if(c[k] != c[j-k-1]){
                    p[i]=false;
                }
            }
        } else {
            p[i] = false;
        }
    }

    for(int i=n;i<SIZE;i++) {
        
        if(p[i]) {
            printf("%d",i);
            break;
        }
    }


    return 0;
}