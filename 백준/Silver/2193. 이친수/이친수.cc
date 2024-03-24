#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    long long p0 = 1;
    long long p1 = 1;
    int n;
    cin >> n;

    // n 1일때 
    if(n==1){
        cout << 1;
        return 0;
    }
    if(n==2){
        cout << 1;
        return 0;
    }
    for(int i=0;i<n-3;i++) {
        long long tmp = p0;
        p0 = p1 + p0;
        p1 = tmp;
    }
    cout << (p0+p1);

    return 0;
}