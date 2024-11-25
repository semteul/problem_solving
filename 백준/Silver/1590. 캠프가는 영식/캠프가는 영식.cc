#include <iostream>

#define lt long long

using namespace std;

lt T,N;

int f(lt s, lt i, lt c){
    lt n=0;
    while(s + i*n < T) {
        if(n >= c)
            return -1;
        n++;
    }

    if(n >= c)
        return -1;

    return s+i*n-T;
}

int main() {
    cin >> N >> T;

    lt m = -1;

    for(int j=0;j<N;j++) {
        lt s,i,c;
        cin >> s;
        cin >> i;
        cin >> c;
        int result = f(s,i,c);
        if(result == -1)
            continue;
        if(m == -1 || result < m)
            m = result;
    }

    cout << m;
    return 0;
}