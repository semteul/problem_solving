// 그리디 풀이
#include <iostream>

using namespace std;

int v [10];

int main(void) {
    int n,k;
    int count = 0;
    cin >> n >> k;

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    for(int i=n-1;i>=0;i--){
        while( k - v[i] >= 0) {
            k -= v[i];
            count++;
        }
        if(k == 0)
            break;
    }

    cout << count;

    return 0;
}