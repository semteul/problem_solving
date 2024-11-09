#include <bits/stdc++.h>
using namespace std;

int w[10][10] = {0};
int arts[10];

int bt() {

}

void f() {
    int n,m;
    cin >> n >> m;
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++) {
            w[i][j] = 0;
        }
    }

    for(int i=0;i<m;i++) {
        int v,a,b;
        cin >> v;
        cin >> a;
        cin >> b;
        w[a][b] += v;
    }

    for(int i=1;i<=n;i++) {
        arts[i] = i;
    }
    
    int max = 0;
    int c = 0;
    
    do{
        int score = 0;
        for(int i=1;i<n;i++) {
            for(int j=i+1;j<=n;j++){
                score += w[arts[i]][arts[j]];
            }

        }
        if(max == score)
            c++;
        else if(max < score){
            max = score;
            c = 1;
        }
    } while(next_permutation(arts+1,arts+1+n));

    cout << max << " " << c << endl;
}

int main(void) {
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        f();
    }
    return 0;
}