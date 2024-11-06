#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    string values[] = {"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
    string suites[] = {"Clubs","Diamonds","Hearts","Spades"};
    string cards[52];

    // 카드 초기화
    int i=0;
    for(string c : suites){    
        for(string v : values) {
            cards[i++] = v + " of " + c;
        }
    }
    
    // 대체 순서 저장
    int sbox[101][52];

    for(int j=0;j<n;j++) {
        for(int k=0;k<52;k++){
            cin >> sbox[j][k];
            sbox[j][k]--;
        }
    }

    int order[101];
    // 셔플 순서 저장
    for(int j=0;j<n;j++) {
        cin >> order[j];
        order[j]--;
    }

    // 셔플 순서대로 섞기
    for(i=0;i<n;i++) {
        queue<string> q;
        for(int j=0;j<52;j++) {
            q.push(cards[sbox[order[i]][j]]);
        }
        for(int j=0;j<52;j++) {
            cards[j] = q.front();
            q.pop();
        }
        for(int j=0;j<52;j++) {
            cout << cards[j] << '\n';
        }
        if(i!= n-1)
            cout << '\n';
    }
    
    
    return 0;
}