#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int x,y,z;
    cin >> x >> y >> z;

    x -= a;
    y -= b;
    z -= c;

    int sum = (x>0?x:0) + (y>0?y:0) + (z>0?z:0);

    cout << sum ;
    return 0;
}
