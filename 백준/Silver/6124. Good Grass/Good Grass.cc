#include <iostream>
using namespace std;

int r,c;
int board[100][100];

int getSum(int row, int col) {
    int result = 0;
    if(row+2 >= r || col+2 >= c)
        return 0;

    for(int i=row;i<row+3;i++) {
        for(int j=col;j<col+3;j++) {
            result += board[i][j];
        }
    }

    return result;
}

int main() {
    cin >> r;
    cin >> c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) {
            cin >> board[i][j];
        }
    }

    int m = 0;
    int rx=0;
    int ry=0;

    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            int t = getSum(i,j);
            if(m < t){
                m = t;
                rx = i;
                ry = j;
            }

        }
    }
    rx++;
    ry++;
    cout << m << endl;
    cout << rx << " " << ry;

    return 0;
}