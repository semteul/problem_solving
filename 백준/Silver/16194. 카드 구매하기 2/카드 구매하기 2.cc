#include <iostream>
#include <string>

using namespace std;

/*
자기 자신을 더하는 경우도 점화식에 포함해야한다.
*/

int main(void) {
    int mem[1001];
    int card[1001];
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> card[i];
    
    mem[0] = 0;
    mem[1] = card[1];

    for(int i=2;i<=n;i++){
        int min = mem[i-1]+card[1];
        for(int j=2;j<=i;j++){
            if(min > mem[i-j] + card[j])
                min = mem[i-j] + card[j];
        }
        mem[i] = min;
    }
    

    cout << mem[n];

    return 0;
}