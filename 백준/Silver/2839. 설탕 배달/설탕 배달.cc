// 그리디 풀이법,n에서 3을 계속 빼다 5로 나눠떨어지면 그걸로 처리 가능
#include <iostream>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    int count = 0;
    
    while(1) {
        if(n == 3) {
            count++;
            break;
        }
        if(n%5 == 0) {
            count += n/5;
            break;
        }
        if(n < 3) {
            cout << "-1";
            return 0;
        }
        n-=3;
        count++;
    }
    cout << count;
    return 0;
}