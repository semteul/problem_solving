#include <bits/stdc++.h>
using namespace std;

int n, k;
int dp[100000]={0};
vector<int> coins;

int main(void) {
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        coins.push_back(a);
    }

    dp[0] = 1;
    for(auto c : coins) {
        for(int i=0;i<=k;i++) {
            if(dp[i]>0){
                dp[i+c]+=dp[i];
            }
        }
    }

    cout << dp[k];


    return 0;
}