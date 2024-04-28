#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int v;
    cin >> n;
    
    vector<int> r;
    for(int i=0;i<n;i++) {
        cin >> v;
        r.push_back(v);
    }

    sort(r.begin(), r.end());

    int ans = 0;
    for(int i=0;i<n;i++) {
        if( ans < r[i]* (n-i) ){
            ans = r[i] * (n-i);
        }
    }

    cout << ans;

    return 0;
}