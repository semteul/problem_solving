/*
10의 자리수에 올 때 마다 더하는 단위수를 1씩 증가시켰다.
*/
#include <iostream>

using namespace std;

int main(){
    int n;
    long long sum=0;
    cin >> n;

    int j = 1;
    int a = 1;
    for(int i=1;i<=n;i++) {
        if (i == j*10){
            a++;
            j*=10;
        } 
        sum += a;
    }

    cout << sum;

    return 0;
}