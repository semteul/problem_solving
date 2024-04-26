// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int t[1500002];
int p[1500002];
int r[1500002];

int main() {
    int n;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t[i] >> p[i];
    }
    
    /*
        점화식
        i 부터 일을 시작했을 때 최대 값을 Ri라고 했을 때
        
        R_i = 0 for i + t_i > n and i+1 == n
        R_i = R_i+1 for i + t_i > n
        R_i = max( R_(i+1) , R_(i+t_i) + P_i)  <- 쉬는 경우와, 상담하는 경우 중 큰 수
    */
    r[n] = 0;
    for(int i=n-1;i>=0;i--){
        // 끝을 넘어가면 0
        if(i + t[i] > n) {
            r[i] = r[i+1];
            continue;
        }
        // 현재를 포함하는거랑
        // 현재를 미포함하는거랑 비교
        r[i] = max(r[i + t[i]] + p[i], r[i+1]);
    }
    
    cout << r[0] << endl;
    
    return 0;
}