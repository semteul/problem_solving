#include <bits/stdc++.h>
using namespace std;

int s[80];

// 부분수열 있으면 1, 없으면 0
int f(int n) {
    if(n<=1)
        return true;
    
    for(int i=n-2;i>=0;i--) {
        bool flag = true; // 부분수열이면 1
        if(s[n-1] == s[i]) {
            // n-1 ~ i 까지가 i~(같은길이) 까지 모두 같은가?
            int k=i;
            for(int j=n-1;j>i;j--) {
                if(s[k--] != s[j]) {
                    flag = false;
                    break;
                }
            }
            if(flag)
                return false;
        }
    }
    
    return true;
}

int bt(int a, int d, int n) {
    s[d-1] = a;
    if(!f(d)){
       return 0;
    }

    if(d == n) {
        for(int i=0;i<n;i++) {
            cout << s[i];    
        }
        return 1;
    }

    if(bt(1,d+1,n))
        return 1;
    if(bt(2,d+1,n))
        return 1;
    if(bt(3,d+1,n))
        return 1; 
    return 0;
}

int main(void) {
    int n;
    cin >> n;
    bt(1,1,n);
    return 0;
}