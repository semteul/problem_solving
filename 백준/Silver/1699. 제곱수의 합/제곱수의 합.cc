#include <iostream>

using namespace std;

int main(){
    // M[i] = min( M[i-j*j] for j in  range(1,j*j<n)) + 1

    int mem[100001];
    int n;

    cin >> n;
    mem[0] = 0;
    for(int i=1;i<=n;i++){
        mem[i] = i;
        for(int j=1;j*j<=i;j++) {
            if(mem[i-j*j]+1 < mem[i])
                mem[i] = mem[i-j*j]+1;
        }
    }

    cout << mem[n];

    return 0;
}