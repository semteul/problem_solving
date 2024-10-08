#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

bool compare(const array<int, 3>& a, const array<int, 3>& b) {
    if(a[0] != b[0])
        return a[0] > b[0];
    else if(a[1] != b[1])
        return a[1] > b[1];
    else
        return a[2] > b[2];
}

int main() {
    int n, a;
    cin >> n >> a;

    vector<array<int, 3>> v(n);
    int aa[3];

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        cin >> v[i][0] >> v[i][1] >> v[i][2];
        if(t == a) {
            aa[0] = v[i][0];
            aa[1] = v[i][1];
            aa[2] = v[i][2];
        }
    }

    sort(v.begin(), v.end(), compare);

    int count = 1;
    for(int i = 0; i < n; i++) {
        if (aa[0] == v[i][0]&&
            aa[1] == v[i][1]&&
            aa[2] == v[i][2]){
                break;
            }
        count++;
    }
    cout << count;

    return 0;
}
