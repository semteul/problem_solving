#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void) {
    int n,m;
    char board[100][100];
    bool visited[100][100];
    int board_walks[100][100];

    queue<vector<int>> q; // 방문할 정점

    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> board[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            visited[i][j] = false;
        }
    }

    q.push({0,0,1}); // x=0, y=0, walks = 0 넣기

    while(!q.empty()) {
        vector<int> p = q.front();
        q.pop();
        int y = p[0];
        int x = p[1];
        int walks = p[2];
        
        board_walks[y][x] = walks;
        //cout << y << " & " << x << endl;


        // 오른쪽이 비었는지
        if(x+1 < m && visited[y][x+1] == 0 && board[y][x+1]=='1') {
            visited[y][x+1] = true; // 방문
            q.push(vector<int>({y,x+1,walks+1})); 
        }

        // 왼쪽이 비었는지
        if(x-1 >= 0 && visited[y][x-1] == 0 && board[y][x-1]=='1'){
            visited[y][x-1] = true; // 방문
            q.push(vector<int>({y,x-1,walks+1})); 
        }

        // 위가 비었는지
        if(y+1 < n && visited[y+1][x] == 0 && board[y+1][x]=='1') {
            visited[y+1][x] = true; // 방문
            q.push(vector<int>({y+1,x,walks+1}));
        }

        // 아래가 비었는지
        if(y-1 >= 0 && visited[y-1][x] == 0 && board[y-1][x]=='1'){
            visited[y-1][x] = true; // 방문
            q.push(vector<int>({y-1,x,walks+1}));
        }
        
        //cout << q.size() << endl;
    }

    cout << board_walks[n-1][m-1] << endl;

    return 0;
}