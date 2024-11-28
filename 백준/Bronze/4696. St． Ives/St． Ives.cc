#include <iostream>
using namespace std;

int main() {
    double n;
    while(1) {
        cin >> n;
        if(n == 0)
            break;
        
        n = 1+n+n*n+n*n*n+n*n*n*n;
        printf("%.2lf\n",n);
    }
    return 0;
}