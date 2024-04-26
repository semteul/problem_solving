#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int v[10001];
    int v0[10001]; // 안마시는 경우
    int v1[10001]; // 옆잔을 마시고 마시는 경우
    int v2[10001]; // 옆잔을 안마시고 마시는 경우

    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> v[i];
    }

    v0[n-1] = 0;
    v1[n-1] = v[n-1];
    v2[n-1] = v[n-1];

    for(int i=n-2;i>=0;i--){
        v0[i] = max({v0[i+1],v1[i+1],v2[i+1]});
        v1[i] = v0[i+1] + v[i];
        v2[i] = v1[i+1] + v[i];
    }

    cout << max({v0[0],v1[0],v2[0]});
    return 0;
}