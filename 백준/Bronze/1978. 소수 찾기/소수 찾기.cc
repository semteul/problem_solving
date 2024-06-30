#include <iostream>

using namespace std;

int main(void) 
{
    int n;

    cin >> n;

    bool b[10001];

    for(int i=0;i<10001;i++) {
        b[i] = true;
    }

    for(int i=2;i<10001;i++) {
        if(b[i]) { // 소수인 경우
            for(int j=i*2;j<10001;j+=i) {
                b[j] = false;
            }
        }
    }
    b[1] = false; // 1은 소수가 아님

    int count = 0; // 소수의 개수
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(b[a]) {
            count++;
        }
    }

    cout << count;

    return 0;
}