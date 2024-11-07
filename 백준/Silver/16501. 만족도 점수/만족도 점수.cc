#include <bits/stdc++.h>
using namespace std;

int main() {
    int s[8];
    for(int i=0;i<8;i++)
        cin >> s[i];

    sort(s,s+8);

    int m=9999999;
    do {
        int a = s[0] + s[1] - s[2] - s[3];
        a = a>0? a:-a;

        int b = s[4] + s[5] - s[6] - s[7];
        b = b>0? b:-b;

        a = a>b? a:b; // 격차가 더 많이 나는 팀의 격차 = a
        if(m > a) {
            m = a;
        }
    } while(next_permutation(s,s+8));
    
    int c = 100 - m*5;
    if(c==100)
        cout << "1.0";
    else if (c%10>0) {
        cout << "0." << c << endl;
    } else {
        c/=10;
        cout << "0." << c << endl;
    }
    return 0;
}