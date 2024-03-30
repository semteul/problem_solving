// 1000000009

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int t;
    cin >> t ;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if (n==1){
            cout << 1 << endl;
            continue;
        }
        if (n==2){
            cout << 1 << endl;
            continue;
        }
        if (n==3){
            cout << 3 << endl;
            continue;
        }
        
        long long m1[3] = {1,1,1}; // i-1
        long long m2[3] = {0,1,0}; // i-2
        long long m3[3] = {1,0,0}; // i-3인 수의 각각 1로 끝난 경우, 2로 끝난 경우, 3으로 끝난 경우의 수

        for(int j=0;j<n-3;j++){
            long long tmp[3] = {
                (m1[1]+m1[2])%1000000009,
                (m2[0]+m2[2])%1000000009,
                (m3[0]+m3[1])%1000000009
            };
            m3[0] = m2[0];m3[1] = m2[1];m3[2] = m2[2];
            m2[0] = m1[0];m2[1] = m1[1];m2[2] = m1[2];
            m1[0] = tmp[0];m1[1] = tmp[1];m1[2] = tmp[2];
        }
        cout << (m1[0]+m1[1]+m1[2])%1000000009 << endl;
    }
    return 0;
}