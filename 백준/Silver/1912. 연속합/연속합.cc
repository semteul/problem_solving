#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int dp[n];

    for (int i=0;i<n;i++) {
        cin >> dp[i];
    }

    int max = dp[0];
    for (int i=1;i<n;i++) {
        if (dp[i] < dp[i]+dp[i-1]){
            dp[i] = dp[i]+dp[i-1];
        }
        if(max < dp[i]) max = dp[i];
    }

    cout << max << endl;
    

    return 0;
}