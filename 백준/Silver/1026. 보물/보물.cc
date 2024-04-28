#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int v;
    cin >> n;
    
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++) {
        cin >> v;
        a.push_back(v);
    }

    for(int i=0;i<n;i++) {
        cin >> v;
        b.push_back(v);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), [](int a, int b){ return a > b; });

    int ans = 0;
    for(int i=0;i<n;i++) {
        ans += a[i] * b[i];
    }

    cout << ans;

    return 0;
}