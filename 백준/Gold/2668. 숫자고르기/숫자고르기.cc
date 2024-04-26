#include <iostream>
#include <algorithm>

using namespace std;

int e[101];
bool v[101]; // 방문했는가
// 
int dfs(int r, int i) {
    if(e[i] == r){
        return true;
    }
    v[i] = true;
    if(v[e[i]]) {
        return false;
    }
    return dfs(r, e[i]);
}

int main(void) {
    int n;
    int count=0;
    int result[101]; // 사이클이 형성된 index만 저장됨

    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> e[i];
    }

    for(int i=1;i<=n;i++){
        
        for(int i=1;i<=n;i++)
            v[i] = false;

        if(dfs(i,i)) 
            result[count++] = i;
    }

    cout << count << endl;
    for(int i=0;i<count;i++) {
        cout << result[i] << endl;
    }

    return 0;
}