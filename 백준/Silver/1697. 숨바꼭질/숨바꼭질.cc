#include <bits/stdc++.h>
using namespace std;

int visited[200000] = {0};
int n, k;

int main(void) {
    cin >> n >> k;

    queue<int> q;
    queue<int> dq;
    q.push(n);
    dq.push(0);
    visited[n] = 1;

    while(1) {
        int i = q.front();
        int d = dq.front();
        q.pop();
        dq.pop();
        if(i == k){
            cout << d;
            return 0;
        }

        if(i-1 >= 0) {
            if(!visited[i-1]){
                q.push(i-1);
                dq.push(d+1);
                visited[i-1]=true;
            }
        }
        if(i < k) {
            if(!visited[i*2]) {
                q.push(i*2);
                dq.push(d+1);
                visited[i*2]=true;
            }
            if(!visited[i+1]) {
                q.push(i+1);
                dq.push(d+1);
                visited[i+1]=true;
            }
        }
    }

    return 0;
}