#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int v[10001];
    int dp[10001]; // 안마시는 경우

    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> v[i];
        dp[i] = 0;
    }

    dp[0] = v[0];
    dp[1] = v[1] + v[0];
    dp[2] = max(v[0],v[1]) + v[2];


    for(int i=3;i<n;i++){
        dp[i] = max(dp[i-3]+v[i-1]+v[i],dp[i-2]+v[i]);
    }

    std::cout << dp[n-1];
    return 0;
}