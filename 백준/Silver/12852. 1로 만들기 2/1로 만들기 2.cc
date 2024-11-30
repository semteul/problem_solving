#include <bits/stdc++.h>

using namespace std;

int dp[1000001];
int op[1000001];

int main(void) {
    int x;
    cin >> x;

    dp[1] = 0;
    dp[2] = 1;
    op[2] = 2;
    dp[3] = 1;
    op[3] = 3;

    for(int i=4;i<=x;i++) {
        dp[i] = 1000001;
        
        if(i%3 == 0 && dp[i/3]+1 < dp[i]) {
            dp[i] = dp[i/3] + 1;
            op[i] = 3;
        }

        if(i%2 == 0 && dp[i/2]+1 < dp[i]) {
            dp[i] = dp[i/2] + 1;
            op[i] = 2;
        }

        if(dp[i-1]+1 < dp[i]) {
            dp[i] = dp[i-1]+1;
            op[i] = 1;
        }
    }

    cout << dp[x] << endl;
    while(1) {
        cout << x << " ";
        if(x == 1)
            break;

        if(op[x] == 3) x/=3;
        else if(op[x] == 2) x/=2;
        else if(op[x] == 1) x-=1;
    }

    return 0;
}