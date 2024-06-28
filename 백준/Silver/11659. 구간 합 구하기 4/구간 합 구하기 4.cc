#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    ostringstream oss;
    int a[100001];
    int s[100001];

    a[0] = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    // 합 구하기
    s[0] = 0;
    for(int i=1;i<=n;i++) {
        s[i] = a[i] + s[i-1];
    }

    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        oss << s[b] - s[a-1] << endl;
    }

    cout << oss.str();

    return 0;
}