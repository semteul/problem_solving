// 5525. 정규식 없이 구현해보기
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    string s;
    cin >> n >> m >> s;
    
    int count=0;
    int result=0;
    int offset=1;
    for(int i=2;i<m;i+=offset) {
        if(s[i-2]=='I'&&s[i-1]=='O'&&s[i]=='I'){
            count++;
            offset = 2;
        } else {
            if(count>=n){
                result += count-n+1;
            }
            count=0;
            offset = 1;
        }
    }
    if(count>=n){
        result += count-n+1;
    }
    cout << result;
    return 0;
}