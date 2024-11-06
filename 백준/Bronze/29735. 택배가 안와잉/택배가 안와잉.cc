#include <bits/stdc++.h>
using namespace std;



int main(void) {
    int sh,sm,eh,em;
    int n,t;

    scanf("%d:%d %d:%d",&sh,&sm,&eh,&em);
    scanf("%d %d",&n,&t);

    int d=0;
    int h=sh,m=sm;
    while(n>=0) {
        m+=t;
        if(m>=60) { 
            h += 1;
            m-=60;
        }
        if(h > eh || (h==eh && m >= em)) {
            d++;
            m = sm; h=sh;
            continue;
        }
        
        n--;
    }

    cout << d << endl;
    printf("%02d:%02d",h,m);

    return 0;
}