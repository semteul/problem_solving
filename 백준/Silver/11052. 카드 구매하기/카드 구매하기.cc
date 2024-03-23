#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> cards(n+1);
    for(int i=1;i<=n;i++)
        cin >> cards[i];
    
    vector<int> mem(n+1);
    mem[0] = 0;
    mem[1] = cards[1];
    for(int i=2;i<=n;i++){
        // P(i-c)에서 V(c)더한것으로 max 업데이트
        int max = 0;
        for(int j=0;j<=n;j++) {
            if(i-j < 0) break;
            int x = mem[i-j] + cards[j];
            if(x>max) max = x;
        }
        mem[i] = max; 
    }

    cout << mem[n];
    return 0;
}