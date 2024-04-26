#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int count = 0;
    int r[4];
    bool board[100][100];

    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            board[i][j] = false;
        }
    }
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> r[j];
        }
        for(int x=r[0];x<r[2];x++){
            for(int y=r[1];y<r[3];y++){
                if(!board[y][x]){
                    board[y][x] = true;
                    count++;
                }
            }
        }
    }

    cout << count;


    return 0;
}