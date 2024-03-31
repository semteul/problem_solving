// DP 풀이
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long dp[100][10]; // dp[i][j] 는 i+1자리수에 첫번째 자리수가 j+1일때 계단수의 개수

    dp[0][0] = 0; // 첫번째 자리수가 0으로 시작하는 수는 없음
    for(int j=1;j<10;j++) // 초기값, 1자리수일 때
        dp[0][j] = 1;

    for(int i=1;i<n;i++) {
        for(int j=0;j<10;j++) {
            if(j == 9) // 끝자리가 9일 때 계단수는 다음 자리수가 8인 수
                dp[i][9] = dp[i-1][8];
            else if(j==0) // 끝자리가 0일 때 계단수는 다음 자리수가 1인 수
                dp[i][0] = dp[i-1][1];
            else // 그 외의 자리수에 대해서는 전 자리수에서 1 적은 자리수의 경우의수 + 1 많은 자리수의 경우의 수
                dp[i][j] = (dp[i-1][j+1] + dp[i-1][j-1]) % 1000000000;
        }
    }  

    // 마지막 합계 구하기
    int sum=0;
    for(int j=0;j<10;j++) 
        sum = (sum + dp[n-1][j]) % 1000000000;

    cout << sum<< endl; 
    return 0;
}