#include <iostream>
#include <vector>

using namespace std;

bool visited[101] = {false};
vector<vector<int>> tree; // 인접리스트로 트리 구현

int dfs(int i, int a){
    visited[i] = true;
    if(i == a) {
        return 1;
    }
    int count = 0;
    for(auto c : tree[i]){
        if(visited[c])
            continue;
        count = dfs(c, a);
        if(count > 0)
            return count +1;
    }
    return 0;
}

int main(void) {
    int n, m, a, b;
    cin >> n;
    cin >> a >> b;
    cin >> m;

    for(int i=0;i<n;i++){
        tree.emplace_back();
    }
    for(int i=0;i<m;i++){
        int p,c;
        cin >> p >> c;
        tree[p-1].emplace_back(c-1);
        tree[c-1].emplace_back(p-1);
    }
    
    // 트리는 한 노드에서 다른 노드로 가는 길이 단 하나밖에 없다.
    // 어디서 출발해도 무방함
    cout << dfs(a-1,b-1)-1;
    
    return 0;
}