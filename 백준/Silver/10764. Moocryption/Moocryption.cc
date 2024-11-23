#include <iostream>
#include <string>

int count[256][256]={0};
char board[100][100];
int N,M; // row, col

using namespace std;

void d1(int i,int j) {
    while(1) {
        if(i-2 < 0 || j+2 >= M)
            break;

        if(board[i-1][j+1] == board[i-2][j+2]) {
            char o = board[i-1][j+1];
            if(board[i][j] != o){
                char m = board[i][j];
                if(m!='M' && o!= 'O')
                
                count[m][o]++;
            }
        } else if(board[i][j] == board[i-1][j+1]) {
            char o = board[i][j];
            char m = board[i-2][j+2];
            if(m!='M' && o!= 'O')
                
            count[m][o]++;
        }

        i--;
        j++;
    }
}

void d2(int i,int j) {
    while(1) {
        if(i-2 < 0 || j-2 < 0)
            break;

        if(board[i-1][j-1] == board[i-2][j-2]) {
            char o = board[i-1][j-1];
            if(board[i][j] != o){
                char m = board[i][j];
                if(m!='M' && o!= 'O')
                
                count[m][o]++;
            }
        } else if(board[i][j] == board[i-1][j-1]) {
            char o = board[i][j];
            char m = board[i-2][j-2];
            if(m!='M' && o!= 'O')
                
            count[m][o]++;
        }

        i--;
        j--;
    }
}

void lr(int r) {
    for(int i=M-1;i>=2;i--){
        if(board[r][i-1] == board[r][i-2]) {
            char o = board[r][i-1];
            if(board[r][i] != o) {
                char m =  board[r][i];
                if(m!='M' && o!= 'O')
                
                count[m][o]++;
            }
        } else if(board[r][i] == board[r][i-1]){
                char o = board[r][i];
                char m = board[r][i-2];
                if(m!='M' && o!= 'O')
                
                count[m][o]++;
        }
    }
}

void ud(int c) {
    for(int i=N-1;i>=2;i--){
        if(board[i-1][c] == board[i-2][c]) {
            char o = board[i-1][c];
            if(board[i][c] != o) {
                char m =  board[i][c];
                if(m!='M' && o!= 'O')
                count[m][o]++;
            }
        } else if(board[i][c] == board[i-1][c]){
                char o = board[i][c];
                char m = board[i-2][c];
                if(m!='M' && o!= 'O')
                
                count[m][o]++;
        }
    }
}


int main() {
    cin >> N >> M;

    for(int i=0;i<N;i++) {
        string str;
        cin >> str;
        for(int j=0;j<M;j++)
            board[i][j] = str[j];
    }

    for(int i=0;i<N;i++){
        lr(i);
    }

    for(int i=0;i<M;i++){
        ud(i);
    }

    for(int i=0;i<N;i++){
        d1(i,0);
    }
    
    for(int i=1;i<M;i++){
        d1(N-1,i);
    }

    for(int i=0;i<M-1;i++){
        d2(N-1,i);
    }

    for(int i=0;i<N;i++){
        d2(i,M-1);
    }

    int result = 0;
    for(char i='A'; i <= 'Z'; i++) {
        for(char j='A'; j<= 'Z';j++) {
            if(result < count[i][j])
                result = count[i][j];
        }
    }

    cout << result;

    return 0;
}
