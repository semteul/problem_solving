#include <bits/stdc++.h>
using namespace std;

int main(void) {
    //129~138

    int n,l;
    int*a = (int*)malloc(sizeof(int)*1000000);
    cin >> n >> l;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int*w = (int*)malloc(sizeof(int)*2000000);
    memset(w,0,sizeof(int)*2000000);
    int c=0,count=0;
    
    for(int i=0;i<n;i++) {
        c-=w[i];
        c+=a[i];
        w[i+l] = a[i];
        if(c >= 129 && c <= 138){
            count++;
        }
    }
    cout << count;

    free(a);
    free(w);

    return 0;
}