#include <bits/stdc++.h>
using namespace std;

int a[100];
int p[100];

int main(void) {
    int n,k;
    cin >> n >> k;
    
    for(int i=0;i<k;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        p[i] = -1;
    }

    int count = 0;
    for(int i=0;i<k;i++) {
        // 이미 존재하는가?
        bool f=false;
        for(int j=0;j<n;j++) {
            if(p[j] == a[i]) {
                f=true;
                break;
            }
        }
        if(f)
            continue;

        // 빈 자리가 있나?
        f = false;
        for(int j=0;j<n;j++) {
            if(p[j]==-1) {
                p[j] = a[i];
                f = true;
                break;
            }
        }
        if(f)
            continue;
        
        // 제일 나중에 바꿀 것은?
        int m=0;
        int index=0;

        for(int j=0;j<n;j++) {
            int d=0;
            for(int u=i+1;u<k;u++) {
                if(p[j] == a[u])
                    break;
                d++;
            }
            if(m<d) {
                m = d;
                index = j;
            }
        }
        p[index] = a[i];
        count++;
    }

    cout << count;


    return 0;
}