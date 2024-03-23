#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> mem(n+1);

    mem[0] = 0;
    mem[1] = 1;
    mem[2] = 3;

    for(int i=3;i<=n;i++)
        mem[i] = (mem[i-2]*2+mem[i-1])%10007;
    
    cout << mem[n];

    return 0;
}