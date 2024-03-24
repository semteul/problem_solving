/*
2225번 합분해

DP로 우선 풀어보기
2차원 메모이제이션이 필요함.

- 점화식 -
j를 i번 나눠 더하는 경우의 수: 
S_j_i = sum(S_(j-1)_(i-z)))

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    unsigned long long n,k;
    cin >> n >> k;
    
    vector<vector<unsigned long long >> mem(k+1,vector<unsigned long long >(n+1));

    for(int i=0;i<=n;i++){
        mem[1][i] = 1;
    }
    for(int j=2;j<=k;j++) {
        for(int i=0;i<=n;i++){
            unsigned long long s = 0;
            for(int z=0;z<=i;z++){
                s+=mem[j-1][i-z]%1000000000;
            }
            mem[j][i] = s;
        }
    }
    cout << mem[k][n]%1000000000;
    return 0;
}