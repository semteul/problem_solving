#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int dp[1000];
    int a[1000];

    for(int i=0;i<n;i++) {
        dp[i] = 1;
        cin >> a[i];
    }
    
    int max = 1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(dp[i] <= dp[j] && a[i] > a[j]){
                dp[i] = dp[j] + 1;
            }
            if(max < dp[i])
                max = dp[i];
        }
    }

    cout << max << endl;

    return 0;
}