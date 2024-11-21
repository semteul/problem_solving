#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str[10];
    int row[10] = {0};
    int col[10] = {0};
    int r,c;

    cin >> r >> c;
    r--;
    c--;

    for(int i=0;i<10;i++) {
        cin >> str[i];
    }

    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            if(str[i][j] == 'o') {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    int result = 999999;
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            if(!row[i] && !col[j]) {
                int a= abs(i-r) + abs(j-c);
                if(result > a)
                    result = a;
            }
        }
    }

    cout << result;

    return 0;
}