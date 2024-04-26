#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int r[1001];
    int g[1001];
    int b[1001];
    int minr[1001];
    int ming[1001];
    int minb[1001];

    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> r[i] >> g[i] >> b[i];
    }
    /*
        각 집은 서로 색이 달라야 함.
        어떤 한 집 까지 칠하는데 드는 최소값은 
        한 집의 한 색을 칠하는 최소값 + 이전 집의 겹치지 않는 색을 칠하는 최소값
        
        따라서 r,g,b를 따로 메모이제이션 한다.
    */
    minr[0] = r[0];
    ming[0] = g[0];
    minb[0] = b[0];

    for(int i=1;i<n;i++){
        minr[i] = min(ming[i-1],minb[i-1]) + r[i];
        ming[i] = min(minr[i-1],minb[i-1]) + g[i];
        minb[i] = min(minr[i-1],ming[i-1]) + b[i];
    }

    
    std::cout << min({minr[n-1],ming[n-1],minb[n-1]});
    return 0;
}